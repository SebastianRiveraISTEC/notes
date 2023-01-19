; REF_pratica_001
;
; Aplica funcao 09H para mostrar uma mensagem (toda de uma vez)


; Directivas padrao

	#make_COM#
    
    ORG  100H
    
       
    jmp inicio  

	
; Alocacao de dados

	.Data

msg db 'Estamos perto do natal', 13, 10, '$'

                                                                      
; Area de codigo (instrucoes/comandos)

inicio:

	.Code
	
    mov ah, 9
    
    lea dx, msg
    
    int 21H	     

; O programa esta terminado

fim: 

    MOV AH, 4CH
    
    INT 21h