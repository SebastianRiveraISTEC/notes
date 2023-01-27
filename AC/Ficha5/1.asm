#make_COM#
    ORG  100H  

jmp START

msg DB 'campus lumiar$'
msg1 DB 'Ocorrências das Frequências das Vogais$'
ansA DB 'a: $'
ansE DB 'e: $'
ansI DB 'i: $'
ansO DB 'o: $'
ansU DB 'u: $'

START:  
	call countVowels
	mov AH, 4ch
	int 21h

countVowels proc near

	push ax
	push bx
	push cx
	push dx
	push ex

	lea si msg

	mov ax 0

l1:
	mov al, [si]
	cmp al '$'
	jz fim

	cmp al 'a'
	jz addA

	cmp al 'e'
	jz addE

	cmp al 'i'
	jz addI

	cmp al 'o'
	jz addO

	cmp al 'u'
	jz addU


addA:
	inc ax
	jmp nextChar

addE:
	inc bx
	jmp nextChar

addI:
	inc cx
	jmp nextChar

addO:
	inc dx
	jmp nextChar

addU:
	inc ex
	jmp nextChar

nextChar:
	inc si
	jmp l1

fim:
	