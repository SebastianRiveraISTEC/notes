# Princípios da lógica matemática

Definição de proposição: Todo o enunciado só pode assumir 2 valores lógicos: Verdadeiro ou Falso.

## Primeiro principio (Não contradição)

Uma proposição não pode ser verdadeira e falsa ao mesmo tempo.

## Segundo principio (Terceiro excluído)

Só há 2 hipóteses, não há uma terceira.



### Exercício 1

Descreva o espaço de resultados que se obtém pelo lançamento de uma moeda 

$\Omega = \{F,C\}$

### Exercício 2

Descreva o espaço de resultados obtido pelo lançamento de duas moedas.

$\Omega = \{FF,CC,FC,CF\}$



## Calcular tamanho do espaço de resultados (Numero de casos possíveis)

$2^n$, $n$ = quantidade de proposições

Expressão de calculo dos arranjos completos de base binária.

------------------------------------

## Operações básicas

### Conjunção($\and$)

Definição da operação conjunção: O resultado da operação conjunção só é verdadeiro quando ambas proposições forem verdadeiras.

### Exercício

Qual é o resultado da conjunção de duas proposições?

| Proposição 1 (P1) | Proposição 2 (P2) | Resultado da conjunção ($P1 \and P2$) |
| ----------------- | ----------------- | ------------------------------------- |
| V                 | V                 | V                                     |
| V                 | F                 | F                                     |
| F                 | V                 | F                                     |
| F                 | F                 | F                                     |

### Disjunção inclusiva

Definição:  O resultado da operação disjunção só é falso quando ambas proposições são falsas

### Exercício

Qual é o resultado da operação disjunção de duas proposições?

| Proposição 1 (P1) | Proposição 2 (P2) | Resultado da conjunção ($P1 \or P2$) |
| ----------------- | ----------------- | ------------------------------------ |
| V                 | V                 | V                                    |
| V                 | F                 | V                                    |
| F                 | V                 | V                                    |
| F                 | F                 | F                                    |

### Negação

| Proposição 1 (P1) | Negação de P1 ($\neg P1$) |
| ----------------- | ------------------------- |
| V                 | F                         |
| F                 | V                         |



## Exercícios

A traves da tabela de verdade, prove a veracidade das leis de De Morgan

Primeira lei $(\overline{A\cup B}) = (\overline{A}\cap \overline{B})$

| P1   | P2   | **$\neg(P1\or P2)$** | $\neg P1 \and \neg P2$ |
| ---- | ---- | -------------------- | ---------------------- |
| V    | V    | F                    | F                      |
| V    | F    | F                    | F                      |
| F    | V    | F                    | F                      |
| F    | F    | V                    | V                      |

Segunda lei $\overline{A\cap B} = (\overline{A}\cup \overline{B})$

| P1   | P2   | **$\neg(P1\and P2)$** | $\neg P1 \or \neg P2$ |
| ---- | ---- | --------------------- | --------------------- |
| V    | V    | F                     | F                     |
| V    | F    | V                     | V                     |
| F    | V    | V                     | V                     |
| F    | F    | V                     | V                     |

-----------------------

### Exercício (XOR)

Com base no acontecimento G) do exercício do álgebra dos acontecimentos, deduza a **<u>operação disjunção exclusiva</u>**.

| P1   | P2   | **$P1\oplus P2$** |
| ---- | ---- | ----------------- |
| V    | V    | F                 |
| V    | F    | V                 |
| F    | V    | V                 |
| F    | F    | F                 |



O resultado da disjunção exclusiva é verdadeira quando existe um número ímpar de resultados verdadeiros.

### Exercício

Proceda a operação disjunção exclusiva de 3 proposições

| P1   | P2   | P3   | $P1\oplus P2 \oplus P3$ |
| ---- | ---- | ---- | ----------------------- |
| V    | V    | V    | V                       |
| V    | V    | F    | F                       |
| V    | F    | V    | F                       |
| V    | F    | F    | V                       |
| F    | V    | V    | F                       |
| F    | V    | F    | V                       |
| F    | F    | V    | V                       |
| F    | F    | F    | F                       |

-----------------------

Com base na álgebra dos conjuntos o dos acontecimentos, deduza a operação **<u>condicional</u>** de 2 proposições

| P1   | P2   | $P1 \rightarrow P2 $ |
| ---- | ---- | -------------------- |
| V    | V    | V                    |
| V    | F    | F                    |
| F    | V    | V                    |
| F    | F    | V                    |

## Regra da operação condicional

O resultado da operação condicional é falso quando a proposição antecedente é verdadeira e a proposição consequente é falsa.

-------------------------

A traves da tabela de verdade, defina tautologia

Uma tautologia é uma proposição composta donde cujo valor lógico é sempre verdadeiro independentemente do valor das proposições lógicas simples.

