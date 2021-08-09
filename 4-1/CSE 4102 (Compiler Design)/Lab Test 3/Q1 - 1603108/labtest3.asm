;Question 1: Write an Assembly Program for expression: E = 40; V = 90; D = E * V - 20; print(D);
;Roll - 1603108

.686 
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
msg1 byte "E = 40", 0
msg2 byte "V = 90", 0
output_format byte "%d", 0
input_format byte "%d", 0
E sdword 40
V sdword 90
D sdword ?

.code
main proc 
    mov eax, E
    mov ebx, V 
    mul ebx
    mov D,eax

    sub D, 20

    INVOKE printf, ADDR output_format, D
    ret
main endp
end
