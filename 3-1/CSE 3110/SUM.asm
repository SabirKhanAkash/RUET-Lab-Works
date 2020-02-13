.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    
    MOV AH,1      ;this is for 1st input
    INT 21H
    MOV BL,AL
    
    MOV AH,1      ;this is for 2nd input
    INT 21H

    ADD AL,BL
    MOV BL,AL

    SUB BL,48
    
    MOV AH,2       ;this is for showing output
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H
    
    MOV DL,BL
    INT 21H
    
    MOV AH,4CH     ;this is DOS exit function
    INT 21H
    
MAIN ENDP
    END MAIN
    