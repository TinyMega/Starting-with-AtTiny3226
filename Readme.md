![Alt text](Images/TinyMega.svg)

# Getting started with AtTiny3226

This project will show you how to get started with a tinyAVR-2 processor, specifically an AtTiny3226.
We will be using basic tools:
- avrgcc compiler
- make utility
- avrdude firmware utility
- [prototype pcb board](https://www.elecrow.com/protoboard-tht-soic-50x80mm.html)
- usb to serial-port

[See full documentation](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html)

# Project summary

## Avrgcc compiler

- Where to get the compiler
- How to set it up

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#Compile)

## Mounting a processor on a protoboard

- Schematic diagram
- Minimal Blink-led application
- UPDI connector for programming
- Example protoboard

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#mounting)

## Sourcecode for Blink-led

- Full sourcecode
- Detailed explanation per section.

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#WriteSoftware)

## Project Make file

Using an easy-to-use make script with step-by-step explanation of each section.
- Setting macros
- Setting compiler options
- Compile sources to .elf
- Extract .hex file from .elf
- Extract assembly listing from .elf
- Write firmware into target
- Update fuses in target

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#Makefile)

## Downloading firmware into target

Using avrdude and an USB-serialport
- Required hardware
- How to connect
- Using serialupdi protocol

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#BurnFirmware)

## Explanation of processor fuses

- What do they mean
- How can you change them

 [See details](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html#FuseBits)

 [See full project documentation](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html)
