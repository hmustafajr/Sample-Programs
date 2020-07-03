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

When using Python, string manipulation would probably trip you up and confuse you like it did for me. In Python think of strings as pointers. I know right? A label that points to another label. The following is a demonstration:

label1 = Breonna Taylor
label2 = label1

At this point we have a blob of memory somewhere with the python string 'Breonna Taylor' stored. We also have two labels pointing to that blob of memory. If we then change label1's assignment, label2 does not change:

label1 = 'Justice for'
label2
'Breonna Taylor'

Summing it up:
Two labels were pointing at the same string in memory:
label1 and label2 both point to 'Breonna Taylor'

label1 is now reassigned to point to a different string
