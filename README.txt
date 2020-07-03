# Sample-Programs
Ethical Hacking Basics

; The first step in assembling is to make the object code:
$ nasm -f elf hello.asm

; Next you will invoke the linker to make the executable
$ ld -s -o hello hello.o

; Finally you can run the executable
$ ./hello
; will essentially print out "Hello Mufasa!"


b <function> sets a breakpoint at function
b *mem	sets a breakpoint at absolute memory allocation
info b displays information about breakpoints
delete b removes a breakpoint
run <args> starts debugging program from within gdb with given arguments
info reg displays information about the current register state
stepi or si executes one machine instruction
next or n exectues one function
bt backtrace command, which also shows the names of stack frames
up/down moves up and down the stack frames
print var prints the value of the variable
print /x $<reg> prints the value of a register
x /NT A examines memory where N = number of units to display; T = type of data to display (x:hex, d:dec, c:char, s:string, i:instruction) A =  absolute address or symbolic name such as "main"
quit exits gdb
