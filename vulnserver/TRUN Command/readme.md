# TRUN Command Stack-Based Buffer Overflow

## In this write-up I'll provides every single steps on how to perform:

-spiking to determine the specific command in the program is vulnerable to buffer overflow

-finding the correct offset to overwrite the EIP

-checking for bad characters that will terminate the shellcode

-using mona to find the modules that have the specific assembly instruction

-develop exploit script to inject shellcode 

-spawning a reverse tcp shell using msfvenom generated shellcode

