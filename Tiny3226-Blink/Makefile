#
# Basic Makefile for a small project.
# Just an example to show all required steps.
#

Project     = Blink
DeviceType  = attiny3226
SourceFiles = Main.cpp

# Compiler command-line options
Options  = -mmcu=$(DeviceType)  # Specify target device type
Options += -Wall                # All warnings enabled
Options += -g                   # Include Debug info (Needed for source-code in .lst)
Options += -O2                  # Optimise level 2

# Specify device package (as this is not included in my old copy of the compiler)
Options += -I ~/AvrGcc/Packages/ATtiny_DFP/1.10.348/include
Options += -B ~/AvrGcc/Packages/ATtiny_DFP/1.10.348/gcc/dev/attiny3226

# Do all steps
All : Objects/$(Project).elf Objects/$(Project).hex Objects/Eeprom.hex Objects/$(Project).lst Size Update

# Generate .elf file from sources
Objects/$(Project).elf : $(SourceFiles)
	mkdir -p Objects
	avr-gcc $(Options) $(SourceFiles)  -o Objects/$(Project).elf

# Extract firmware .hex file from .elf
Objects/$(Project).hex  : Objects/$(Project).elf
	avr-objcopy -O ihex -R .eeprom   Objects/$(Project).elf   Objects/$(Project).hex

# Extract .hex file with eeprom data
EepromOptions  = -j .eeprom
EepromOptions += --set-section-flags=.eeprom=alloc,load
EepromOptions += --no-change-warnings
EepromOptions += --change-section-lma .eeprom=0
Objects/Eeprom.hex : Objects/$(Project).elf
	avr-objcopy -O ihex $(EepromOptions) Objects/$(Project).elf Objects/Eeprom.hex

# Extract listing for examining generated code
Objects/$(Project).lst : Objects/$(Project).elf
	avr-objdump -h --demangle -x  -S Objects/$(Project).elf > Objects/$(Project).lst

# Write firmware into target processor
UpdiPort = /dev/ttyUSB0
UpdiBaud = 230400

AvrDude  = avrdude              # avrdude command
AvrDude += -vv                  # Verbose. Print progress and info. More v's is more data
AvrDude += -c serialupdi        # Use 'serialupdi' as programmer type
AvrDude += -p $(DeviceType)     # Specify target device type
AvrDude += -P $(UpdiPort)       # Comport for UPDI to target
AvrDude += -B $(UpdiBaud)       # Baudrate for UPDI to target

# Print memory-size of generated firmware
Size :
	avr-size Objects/$(Project).elf


# Write firmware
Update :
	$(AvrDude) -U flash:w:Objects/$(Project).hex:i

# Read fuses bits
ReadFuses :
	$(AvrDude) -U fuses:r:Fuses.hex:i

# Write fuses bits
FuseBits  = -U wdtcfg:w:0x00:m  # Default value
FuseBits += -U bodcfg:w:0x00:m  # Default value

WriteFuses :
	$(AvrDude) $(FuseBits)

# Delete all generated files and subdirectories
Clean :
	rm -rf Objects

