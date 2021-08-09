.686 
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
output_msg_format byte 0Ah, "%s %d", 0
output_msg1_format byte 0Ah, "%s", 0Ah, 0

msg1 byte "I = 10", 0
msg2 byte "R = 20", 0
msg3 byte "v = IR = ", 0
input_format byte "%d", 0
I sdword 10
R sdword 20
V sdword ?

.code
main proc
    ;INVOKE scanf, ADDR input_format, ADDR number
    
    mov eax, I
    mov ebx, R 
    mul ebx
    mov V,eax

    INVOKE printf, ADDR output_msg1_format, ADDR msg1
    INVOKE printf, ADDR output_msg1_format, ADDR msg2
    INVOKE printf, ADDR output_msg_format, ADDR msg3, V
    ret
main endp
end
