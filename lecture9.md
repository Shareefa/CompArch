# CISC vs RISC

## CISCS Won Out in the End

## RISC has limit opcode size and simple hardware

## Intel created a hardware decoder for CISC into RISC that is seamless

## Why is CPU's Faster

* Clock Spped
* Micro Architecture Improvements

Commands to know:
* objdump
* x/100xb (function name)

Three different Instructions:
* Transfer data between mem and registers
* Arithmetic function on register or memory data
* Transfer Control

Operands:
* memory
* Registers:
  * ESP Stack Pointer (Top of the start)
  * EBP Frame Pointer (Beginning of the stack Start of the function)
    * Between ESP and EBP is the activation record(Just all the things put on the stact)
  * Computation Registers:
    * EAX
    * ECX
    * EBX
    * EDX
  * Source Pointers:
    * ESI
    * EDI
NOTE: The return address is at the top of the stack and is placed there by hardware when the function is called

WHEN x86 was 8bit it had:
* al
* bl
* dl
* cl

When in was 16bit:

So each register has subregisters in each which provide backward compatibility
