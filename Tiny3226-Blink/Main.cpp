//
// File     : Main.cpp
// Created  : 2025-06-23
// By       : CJ van der Hoeven
// Website  : TinyMega.nl/Projects/GettingStarted-AtTiny3226
//
// Purpose  : Blink-a-led on PB4
//

#include <avr/io.h>
#include <avr/wdt.h>

// ================================================================================================

// Delay(2M) takes 1000 milli-seconds
// - Inner loop takes 0.5 uS
//   - See listing : Takes 7 cycles per inner loop.
//   - Should result in 2 counts per uSec
void Delay(uint32_t mS)
{  do
   {  wdt_reset();   // To prevent that loop is optimised-away by compiler
   } while(mS--);
}

// ================================================================================================

enum PIN_VALUE
{  // Mapping pin names to bitmap values
   PIN_LED = PIN4_bm,
};

// ================================================================================================

int main()
{
   CPU_CCP           = CCP_IOREG_gc;  // Unlock Clock control
   CLKCTRL.MCLKCTRLB = 0x00;          // Prescaler off. Run at full speed

   PORTB.DIRSET = PIN_LED;            // Enable PB4 output driver

   for( ;; )
   {  PORTB.OUTSET = PIN_LED;         // Set PB4 high (LED ON)
      Delay( 200000);
      PORTB.OUTCLR = PIN_LED;         // Set PB4 low (LED OFF)
      Delay(1800000);
   }
   return 0;
}

// ================================================================================================
