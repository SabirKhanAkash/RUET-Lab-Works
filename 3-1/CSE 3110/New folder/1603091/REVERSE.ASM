INCLUDE "EMU8086.INC"
.MODEL SMALL
.STACK 100H
.DATA  

    ARR DW 100 DUP (0)  
    CNT DB 0
    
.CODE
MAIN PROC  
    
    MOV AX,@DATA
    MOV DS,AX
    
    
    PRINTN "ENTER A STRING :"
    XOR CX,CX
    MOV AH,1
    INT 21H
    INPUT:
        CMP AL,0DH
        JE END_
        PUSH AX 
        INC CX
        INT 21H
        JMP INPUT
        
        
END_:
    PRINTN " " 
    MOV AH,2
    TOP:
        POP DX
        INT 21H
        LOOP TOP
        
        
        
        
    
EXIT:    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN