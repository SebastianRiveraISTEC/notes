msg db 'o rui amigoda praia$'

                                                                      
; Area de codigo (instrucoes/comandos)

inicio:

	.Code
	
    lea si, msg

l1:

	mov al, [si]
	
	cmp al, 'g'
	jz l2


	cmp al, '$'
	jz fim

	inc si 
    jmp l1

l2:
	cmp al, '$'
	jz fim

	mov DL, al
    mov AH, 2H
    INT 21H

	inc si
	jmp l2


fim: 

    MOV AH, 4CH
    
    INT 21h