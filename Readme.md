![Alt text](Images/TinyMega.svg)

# Getting started with AtTiny3226

This project will show you how to get started with a tinyAVR-2 processor, specifically an AtTiny3226.
We will be using basic tools:
- avrgcc compiler
- make utility
- avrdude firmware utility
- prototype pcb board
- usb to serial-port

[See full documentation](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html)

# Project summary

## Avrgcc compiler

- Where to get the compiler
- How to set it up

## Mounting a processor on a protoboard

- Schematic diagram
- Minimal Blink-led application
- UPDI connector for programming
- Example protoboard

## Sourcecode for Blink-led

- Full sourcecode
- Detailed explanation per section.

## Project Make file

Using an easy-to-use make script with step-by-step explanation of each section.
- Setting macros
- Setting compiler options
- Compile sources to .elf
- Extract .hex file from .elf
- Extract assembly listing from .elf
- Write firmware into target
- Update fuses in target

## Downloading firmware into target

Using avrdude and an USB-serialport
- Required hardware
- How to connect
- Using serialupdi protocol

## Explanation of processor fuses

- What do they mean
- How can you change them

[See full project documentation](https://tinymega.nl/Projects/GettingStarted-AtTiny3226/StartingTiny3226.html)
