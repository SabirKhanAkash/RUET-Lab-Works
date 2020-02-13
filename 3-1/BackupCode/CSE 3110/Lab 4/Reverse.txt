.MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter the binary number (max 8-bit) : $'
   PROMPT_2  DB  0DH,0AH,'The given binary number in reverse order is : $'

 .CODE
   MAIN PROC
     MOV AX, @DATA                ; initialize DS  
     MOV DS, AX

     LEA DX, PROMPT_1             ; load and display PROMPT_1   
     MOV AH, 9
     INT 21H

     XOR BL, BL                   ; clear BL 
     MOV CX, 8                    ; initialize loop counter
     MOV AH, 1                    ; set input function

     @INPUT:                      ; jump label
       INT 21H                    ; read a digit
       CMP AL, 0DH                ; compare digit with carriage return 
       JE @END                    ; jump to label @END if carriage return
       AND AL, 0FH                ; convert ascii to decimal code
       SHL BL, 1                  ; rotate BX to left by 1 bit
       OR BL, AL                  ; set the LSB of BX with input
     LOOP @INPUT                  ; jump to label @INPUT

     @END:                        ; jump label

     MOV AL, BL                   ; copy BL into AL
     MOV CX, 8                    ; initialize loop counter

     @LOOP:                       ; loop label
       SHL AL, 1                  ; shift AL to left by i bit
       RCR BL, 1                  ; rotate BL right through carry
     LOOP @LOOP                   ; jump to label @LOOP

     LEA DX, PROMPT_2             ; load and display PROMPT_2   
     MOV AH, 9
     INT 21H

     MOV CX, 8                    ; initialize loop counter
     MOV AH, 2                    ; set output function

     @OUTPUT:                     ; jump label
       SHL BL, 1                  ; shift left BL by 1 bit

       JNC @ZERO                  ; jump to label @ZERO if CF=0
         MOV DL, 31H              ; set DL=1
         JMP @DISPLAY             ; jump to label @DISPLAY

       @ZERO:                     ; jump label
         MOV DL, 30H              ; set DL=0

       @DISPLAY:                  ; jump label
         INT 21H                  ; display digit
     LOOP @OUTPUT                 ; jump to label @OUTPUT

     MOV AH, 4CH                  ; return control to DOS
     INT 21H
   MAIN ENDP
 END MAIN