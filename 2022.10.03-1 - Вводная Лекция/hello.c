#include <stdio.h>

 int main() {

    printf("A\n");

    return 0;
 }

 // gcc hello.c -Wall -o hello (ELF Runnable)
 // gcc hello.c -Wall -o hello -E (C with Libraries)
 // gcc hello.c -Wall -o hello -S (ASM)
 // gcc hello.c -Wall -o hello -c (ELF)