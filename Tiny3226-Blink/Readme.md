# Tiny3226-Blink

This is the sourcecode for a little AtTiny3226 project.
- Lets an LED blink once per second.
- Shows how to setup a small project.

This directory contains the following components:

## Fuses.hex
Intel-hex file containing fuse bits as read from the target processor.

## Fuses.new
Intel-hex file containing fuse bits as read from a new processor. So still with factory-settings.

## Fuses.txt
Small explanation of fuse bits

## Main.cpp
Actual sourcefile for this project. Using .cpp extension to request C++ compilation.

## Makefile
Make script used to generate the hex files and listing.
Also contains commands for downloading hex file into target.


