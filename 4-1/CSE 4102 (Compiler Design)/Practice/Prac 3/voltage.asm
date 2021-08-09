.686 
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
output_msg_format byte "%s", 0
msg1 byte "Current = ", 0
msg2 byte "Resistance = ", 0
msg3 byte "Voltage = ", 0
output_format byte "%d", 0
input_format byte "%d", 0
I sdword ?
R sdword ?
V sdword ?

.code
main proc
    INVOKE printf, ADDR output_msg_format, ADDR msg1
    INVOKE scanf, ADDR input_format, ADDR I

    INVOKE printf, ADDR output_msg_format, ADDR msg2
    INVOKE scanf, ADDR input_format, ADDR R
    
    mov eax, I
    mov ebx, R 
    imul eax,ebx
    mov V,eax

    INVOKE printf, ADDR output_msg_format, ADDR msg3
    INVOKE printf, ADDR output_format, V
    ret
main endp
end