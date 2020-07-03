# Sample-Programs
Ethical Hacking Basics

; The first step in assembling is to make the object code:
$ nasm -f elf hello.asm

; Next you will invoke the linker to make the executable
$ ld -s -o hello hello.o

; Finally you can run the executable
$ ./hello
; will essentially print out "Hello Mufasa!"
