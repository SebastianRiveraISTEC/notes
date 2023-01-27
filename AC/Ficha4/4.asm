#make_COM#
ORG 100H

.Data
msg1 db 13, 10, "Digite uma oracao: $"
aux db 80 dup(?)
semAna db 80 dup(?)
linha db 13,10, '$'

inicio:
.Code
mov ah, 9
lea dx, msg1
int 21h
lea si, aux
lea di, semAna
mov ah, 1

input:
int 21h
cmp al, 13
jz pre
mov [si], al
inc si
jmp input

pre:
mov al, '$'
mov [si], al
lea dx, linha
mov ah, 9
int 21h

lea dx, aux
mov ah, 9
int 21h
lea dx, linha
int 21h
lea si, aux

l1:
mov al, [si]

cmp al, '$'
jz fim1

cmp al, 'a'
jz l2

inc di
mov [di], al

inc si
jmp l1


l2:
inc si
mov al, [si]

cmp al, 'n'
jz l3

dec si
mov al, [si]

inc di
mov [di], al

inc si
mov al, [si]

inc di
mov [di], al

inc si
jmp l1

l3:

inc si
mov al, [si]

cmp al, 'a'
jz l4

dec si
dec si
mov al, [si]

inc di
mov [di], al

inc si
mov al, [si]

inc di
mov [di], al

inc si
mov al, [si]

inc di
mov [di], al

inc si
jmp l1

l4:
inc si
jmp l1

fim1:
inc di
mov al, '$'
mov [di], al

lea dx, semAna
mov ah,9
int 21h