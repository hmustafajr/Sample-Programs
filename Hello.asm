section .data                   ;section declaration
msg db "Hello Mufasa!", 0xa     ; this is a string with a carraige return
len equ $ -msg                  ; length of our string, $ means here
section .txt                    ; mandatory section declaration
                                ; exports the entry point to the ELF linker or
global _start                   ; loaders conveniently recognize _start as the entry point
_start:
