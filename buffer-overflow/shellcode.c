#include <stdio.h>
/**
 * Woher bekommt man den Shellcode (Bytesequenz)?
 *
 * Compilieren und Debugger gdb benutzen.
 * gcc -o shellcode -ggdb -static shellcode.c
 * gdb: disassamble main
 * gdb: disassemble __execve
 *
 * http://insecure.org/stf/smashstack.html
 */

main (){
  char* name[2];
  name[0]="/bin/sh";
  name[1]=NULL;
  execve(name[0],name,NULL);
}
