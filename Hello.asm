section .data                   ;section declaration
msg db "Hello Mufasa!", 0xa     ; this is a string with a carraige return
len equ $ -msg                  ; length of our string, $ means here
section .txt                    ; mandatory section declaration
                                ; exports the entry point to the ELF linker or
global _start                   ; loaders conveniently recognize _start as the entry point
_start:
                                ; write our string to stdout
                                ; note how arguments will be loaded in reverse
mov edx, len                    ; third arg message length
mov ecx, msg                    ; second arg pointer or message to write
mov ebc, 1                      ; load first arg which is the file stdout
mov eax, 4                      ; system call number 4 = sys_write
int 0x80                        ; call kernel interrupt and exit
mov ebx, 0                      ; load first sys call arg which is the exit code
mov eax, 1                      ; sys call number 1 = exit
int 0x80                        ; calls kernel interrup and exits
