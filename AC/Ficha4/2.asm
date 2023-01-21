

base db 'estamos perto do natal$'

nova db 40 dup(?)


inicio:

	.Code
	
    lea si, base
    
    lea di, nova

l1:

    mov al, [si]
    
    cmp al, '$'
    jz fim1

    cmp al, ' '
    jz l2

    mov [di], al
    
    inc si
    inc di
    jmp l1

l2:

	mov [di], '#'
	inc di
	mov [di], '#'
	jmp l1
	inc di

fim1:
	
	mov al, '$'
    mov [di], al

    lea dx, nova
    
    mov ah, 9
    int 21H

fim2:

	MOV AH, 4CH
    INT 21h