# GMON Command SEH Based Buffer Overflow

In this write-up we'll be focusing on SEH Based Buffer Overflow and how to redirect the execution to our shellcode.

Things Covered:
```
-finding the offset to overflow the pointer to next SEH record & the SEH address
-using mona seh command to find 'pop pop ret' instruction
-writing assembly code to perform short jump bypass unnecessary instructions
-writing assembly code to perform addition & jump to padding part
-execute shellcode in padding part
```

Exploit Link:
https://github.com/nobodyatall648/exploits/tree/main/vulnserver/GMON%20Command
