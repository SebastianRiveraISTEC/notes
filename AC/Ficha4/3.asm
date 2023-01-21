; contador cx



inicio:
	.Code

	base db 'a sara e a amiga do nuno$'
	mov cx, 0 
	
l1:

	mov al, [si]
    
    cmp al, '$'
    jz fim1

    cmp al, ' '
    jz l2

    inc si
    jmp l1

l2:

	inc cx
	inc si
	jmp l1


fim1:

	cmp cx, 0
	jz fim2

	mov     dl, '*'
    mov     AH, 02h
	int     21h

	dec cx

	mov dl, 10
	mov ah, 02h
	int 21h
	mov dl, 13
	mov ah, 02h
	int 21h

	jmp fim1


fim2:

	MOV AH, 4CH
    INT 21h