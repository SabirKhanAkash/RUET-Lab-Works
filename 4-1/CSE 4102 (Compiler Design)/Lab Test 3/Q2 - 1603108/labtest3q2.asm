.686 
.model flat, c
include C:\masm32\include\msvcrt.inc
includelib C:\masm32\lib\msvcrt.lib

;1603108
;Question 2: Write an equivalent Assembly Program for following C code: int main() { int index; for(index=1; index<=5; index++) { printf("%d", index); if (index==3) break; } return 0; }


.stack 100h
printf PROTO arg1:Ptr Byte, printlist:VARARG
scanf PROTO arg2:Ptr Byte, inputlist:VARARG

.data
output_msg_format byte "%s", 0
output_msg_format1 byte "%d", 0
output_msg_format2 byte 0Ah, "%s %d", 0Ah, 0


output_msg byte "Current = ",0
output_msg1 byte "Resistance = ",0
output_msg2 byte "Voltage = ",0

input_format byte "%d", 0
I sdword ?


.code
main proc
    mov I, 1

    FOR_:
        cmp I,5
        jg END_FOR_

        INVOKE printf, ADDR output_msg_format1 , I

        cmp I,3
        je END_FOR_

        inc I

        jmp FOR_

    END_FOR_:
    ret

main endp
end