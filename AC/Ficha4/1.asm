#make_COM#
ORG 100H

.Data
msg db "O rui amigo da praia$"

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

mov dl, al
mov AH, 2H
INT 21H

inc si
mov al, [si]

jmp l2

fim:
mov AH, 4CH
INT 21H