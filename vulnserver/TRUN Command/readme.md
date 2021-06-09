# TRUN Command Stack-Based Buffer Overflow

## In this write-up I'll provides every single steps on how to perform:

-spiking to determine the specific command in the program that is vulnerable to buffer overflow

-finding the correct offset to overwrite the EIP

-checking for bad characters that will terminate the shellcode

-using mona to find the modules that have the specific assembly instruction

-develop exploit script to inject shellcode 

-spawning a reverse tcp shell using msfvenom generated shellcode

-exploit script link: https://github.com/nobodyatall648/exploits/tree/main/vulnserver/TRUN%20Command

## Medium Article

https://bryanleong98.medium.com/exploiting-basic-buffer-overflow-in-vulnserver-trun-command-a8e642cf3211
