# Exercício

### Quando é que um argumento é válido na perspetiva da lógica?

É valido quando o resultado da operação condicional for uma tautologia

# Exercício

Sofia é boa aluna de matemática e as boas alunas de matemática são aprovadas nessa disciplina. Sofia reprovo matemática.
Verifique se este argumento é valido.

$$M = \text{Sofia aprova em matemática}\\
B = \text{As boas alunas aprovam}\\$$

$B\wedge M \rightarrow \neg M$

|      |      |             |          |                                 |
| ---- | ---- | ----------- | -------- | ------------------------------- |
| $B$  | $M$  | $B\wedge M$ | $\neg M$ | $(B\wedge M)\rightarrow \neg M$ |
| V    | V    | V           | F        | F                               |
| V    | F    | F           | V        | V                               |
| F    | V    | F           | F        | V                               |
| F    | F    | F           | V        | V                               |

Como não é uma tautologia, o argumento não é válido

----------

# Ex 1

Determine o numero de resultados que é possível obter no lançamento de 4 moedas perfeitas

|      |      |      |      |
| ---- | ---- | ---- | ---- |
| F    | F    | F    | F    |
| F    | C    | F    | F    |
| F    | F    | C    | F    |
| F    | C    | C    | F    |
| F    | F    | F    | C    |
| F    | C    | F    | C    |
| F    | F    | C    | C    |
| F    | C    | C    | C    |
| C    | F    | F    | F    |
| C    | C    | F    | F    |
| C    | F    | C    | F    |
| C    | C    | C    | F    |
| C    | F    | F    | C    |
| C    | C    | F    | C    |
| C    | F    | C    | C    |
| C    | C    | C    | C    |

$\Omega = {FFFF,FCFF,FFCF,FCCF,FFFC,FCFC,FFCC,FCCC,CFFF,CCFF,CFCF,CCCF,CFFC,CCFC,CFCC,CCCC}$

$2^4$



# Ex 2

Identifique uma situação semelhante a do exercício anterior no domínio das proposições booleanas

Em vez de ser duas caras da moeda, são duas proposições: Verdadeiro e falso

# Ex 3

Demonstre que a definição de disjunção exclusiva é equivalente a: $P_1 \oplus P_2 = (P_1 \vee P_2)\wedge \neg(P_1\wedge P_2)$

$P_1 \oplus P_2 = (P_1 \vee P_2)\wedge(\neg P_1 \vee \neg P_2)$

|       |       |            |            |                        |                            |
| ----- | ----- | ---------- | ---------- | ---------------------- | -------------------------- |
| $P_1$ | $P_2$ | $\neg P_1$ | $\neg P_2$ | $\neg(P_1 \wedge P_2)$ | $(\neg P_1 \vee \neg P_2)$ |
| V     | V     | F          | F          | F                      | F                          |
| V     | F     | F          | V          | V                      | V                          |
| F     | V     | V          | F          | V                      | V                          |
| F     | F     | V          | V          | V                      | V                          |

$\neg(P_1 \wedge P_2) = (\neg P_1 \vee \neg P_2) \therefore P_1 \vee P_2)\wedge \neg(P_1\wedge P_2) = (P_1 \vee P_2)\wedge(\neg P_1 \vee \neg P_2)$

# Ex 4

Verifique se a seguinte proposição composta é uma tautologia

$p \vee(q\wedge \neg q) \leftrightarrow p$

|      |      |          |                  |                         |                                           |
| ---- | ---- | -------- | ---------------- | ----------------------- | ----------------------------------------- |
| $p$  | $q$  | $\neg q$ | $q\wedge \neg q$ | $p\vee(q\wedge \neg q)$ | $p\vee(q\wedge \neg q) \leftrightarrow p$ |
| V    | V    | F        | F                | V                       | <u>**V**</u>                              |
| V    | F    | V        | F                | V                       | <u>**V**</u>                              |
| F    | V    | F        | F                | F                       | <u>**V**</u>                              |
| F    | F    | V        | F                | F                       | <u>**V**</u>                              |

É uma tautologia

# Ex 5

Em que contexto o conceito de tautologia é utilizado?

É utilizado no contexto da lógica para fazer a validação de um argumento

# Ex 6

Verifique se a seguinte afirmação é valida: "Se eu fosse artista, seria famoso. Não sou famoso. 

Não sou artista"
$$
p = \text{Artista}\\q = \text{Famoso}\\ p\rightarrow q
$$

|      |      |                                                       |
| ---- | ---- | ----------------------------------------------------- |
| $p$  | $q$  | $((p\rightarrow q) \wedge \neg p )\rightarrow \neg q$ |
| V    | V    | V                                                     |
| V    | F    | V                                                     |
| F    | V    | V                                                     |
| F    | F    | V                                                     |

O argumento é valido

