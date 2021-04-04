.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC 
   
    MOV BL,3
LOOP1:
   CMP BL,0
   JE EXIT1
   MOV AH,2
   MOV DL,'*'
   INT 21H 
   MOV DL,09H
   INT 21H
   DEC BL
   JMP LOOP1
   
   
   
EXIT1:  
   MOV AH,2
   MOV DL,0AH
   INT 21H
   MOV DL,0DH
   INT 21H
   MOV AH,2
   MOV DL,'*'
   MOV BL,1

LOOP2:
   CMP BL,0
   JE EXIT2   
   
   MOV AH,2  
   MOV DL,09H
   INT 21H
   MOV DL,'*'
   INT 21H
   DEC BL
   JMP LOOP2   
   
EXIT2: 
    MOV AH,2
   MOV DL,0AH
   INT 21H
   MOV DL,0DH
   INT 21H
   MOV AH,2
   MOV DL,'*'
   MOV BL,3
   
LOOP3:
   CMP BL,0
   JE EXIT 
   MOV AH,2
   MOV DL,'*'
   INT 21H
   MOV DL,09H
   INT 21H
   DEC BL
   JMP LOOP3   
   

      
    
EXIT:
   MOV AH,4CH
   INT 21H 
    
    

    
MAIN ENDP
END MAIN