.686 
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
output_msg_format byte "%s", 0

msg1 byte "Enter numerator = ", 0
msg2 byte "Enter denominator = ", 0
msg3 byte "quotient = ", 0

output_format byte "%d", 0AH, 0
input_format byte "%d", 0

N sdword ?
D sdword ?
Q sdword ?

.code
main proc
    INVOKE printf, ADDR output_msg_format, ADDR msg1
    INVOKE scanf, ADDR input_format, ADDR N

    INVOKE printf, ADDR output_msg_format, ADDR msg2
    INVOKE scanf, ADDR input_format, ADDR D
    
    mov edx, 0
    mov eax, N
    mov ecx, D
    div ecx
    mov Q, eax

    INVOKE printf, ADDR output_msg_format, ADDR msg3
    INVOKE printf, ADDR output_format, Q
    ret
main endp
end