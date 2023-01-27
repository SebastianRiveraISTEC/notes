#make_COM#

ORG 100H

.Data

base db "estamos perto de natal$"
nova db 40 dup(?)

inicio:
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
inc di
inc si
jmp l1

fim1:
mov al, '$'
mov [di], al

lea dx, nova
mov ah, 9
INT 21H

fim2:
mov ah, 4CH
INT 21H