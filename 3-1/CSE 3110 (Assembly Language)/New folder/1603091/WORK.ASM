INCLUDE "EMU8086.INC"
.MODEL SMALL
.STACK 100H
.DATA  

    ARR DW 100 DUP (?)  
    CNT DB 0   
    A DB 0
    B DB 0
    
.CODE
MAIN PROC  
    
    MOV AX,@DATA
    MOV DS,AX
    
    XOR BX,BX
    PRINTN "ENTER A STRING :"
    XOR CX,CX
    MOV AH,1
    INT 21H
    INPUT:
        CMP AL,0DH
        JE EX 
        CMP AL,20H
        JE END_
        PUSH AX 
        INC CX  
        MOV AH,1
        INT 21H
        JMP INPUT
        
        
END_:
    ;PRINTN " " 
    ;MOV AH,2
    TOP:
        POP DX
        MOV ARR[BX],DX
        ;MOV DL,ARR[BX]
        ;MOV AH,2
        ;INT 21H
        INC BX
        LOOP TOP
    
    MOV ARR[BX],20H;
    INC BX
          
    XOR CX,CX         
    INT 21H
    JMP INPUT
        
EX:  
     TO:
        POP DX
        MOV ARR[BX],DX
        ;MOV DL,ARR[BX]
        ;MOV AH,2
        ;INT 21H
        INC BX
        LOOP TO
     
    PRINTN " "
    ;PRINTN "SHUON"
    XOR CX,CX
    MOV CX,BX
    XOR BX,BX
    MOV AH,2
    
    DO:
        CMP CX,BX
        JE EXIT
        MOV DL,ARR[BX]
        INT 21H
        INC BX
        JMP DO
    
            
   JMP EXIT    
        
    
EXIT:    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN