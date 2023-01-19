# Cap 1

## Introdução a lógica

Sejam $A_1$ e $A_2$ dois acontecimentos tais que:

- O acontecimento $A_1$ realizasse quando uma empresa pertence ao setor da metalomecânica

- O acontecimento $A_2$ realizasse quando uma empresa tem mais de 100 trabalhadores.

Descreva em função de $A_1$ e $A_2$ os seguintes outros acontecimentos:

- A - "A empresa não pertence ao setor da metalomecânica"
- B - "A empresa pertence ao setor da metalomecânica ou tem mais de 100 trabalhadores"
- C - "A empresa não pertence ao setor da metalomecânica e não tem mais de 100 trabalhadores"
- D - "A empresa não pertence ao setor da metalomecânica ou não tem mais de 100 trabalhadores"
- E - "A empresa pertence ao setor da metalomecânica e não tem mais de 100 trabalhadores"
- F - "A empresa tem mais de 100 trabalhadores mas não pertence ao setor da metalomecânica"
- G - "Acontecimento que se realiza quando ocorre <u>***um e um só***</u> dos seguintes acontecimentos: A empresa pertence ao setor da metalomecânica; a empresa tem mais de 100 trabalhadores"

### Respostas

A = $\overline{A_1} $

B = $ A_1 \cup A_2$

C = $\overline{A_1} \cap \overline{A_2}$

D = $\overline{A_1} \cup \overline{A_2}$

E = $A_1 \cap \overline{A_2}$

F = $A_2 \cap \overline{A_1}$

G = $(A_1 \cup A_2) - (A_1 \cap A_2) = (A_1 \cup A_2) \cap \overline{(A_1 \cap A_2)} $

$A\underline{\cup}B = (A\cup B)-(A\cap B)$ 

$A\underline{\cup}B = (A\cup B)\cap \overline{(A\cap B)}$  



### Algumas propriedades da álgebra dos acontecimentos:

- Existência de elemento neutro

  $A_1 \cap \Omega = A_1$, 			$\Omega = $ Universal, elemento neutro da interseção 

  $A_1 \cup \phi = A_1$, 			$\phi =$ Vazio, elemento neutro da união

- Lei do complemento

  $A_1 \cap \overline{A_1} = \phi$

  $A_1 \cup \overline{A_1} = \Omega$



## Leis de Morgan

Procuram transformar a união em interseção e vice-versa  a traves da negação

- $(\overline{A\cup B}) = (\overline{A}\cap \overline{B})$

- $\overline{A\cap B} = (\overline{A}\cup \overline{B})$





............... (?)

### Relação entre diferença e interseção

$(A_1 - A_2) = (A_1 \cap \overline{A_2})$

### União inclusiva entre dois acontecimentos $A_1$ e $A_2$

$A_1 \cup A_2$

### União exclusiva entre dois acontecimentos $A_1$ e $A_2$

$A_1\underline{\cup}A_2 = (A_1\cup A_2)\cap \overline{(A_1\cap A_2)} = (A_1\cup A_2)-(A_1\cap A_2)$  



## Exercícios

-  Defina o espaço de resultados de um lançamento de uma moeda

  $\Omega = \{F,C\}$

- Uma companhia de seguros esta interessada na idade das pessoas a partir dos 20 anos que pretendem fazer seguro em conjunto. O resultado de cada observação representasse por um par de números reais $(x,y)$, onde $x$ representa a idade da pessoa $a$ e o $y$ é a idade da pessoa $b$. Descreva analítica e graficamente o espaço de resultados e os seguintes acontecimentos:

  - A. Pessoa $a$ com idade superior a 50 anos
  - B. Pessoa $a$ com idade superior a da pessoa $b$
  - C. Pessoa $b$ com idade superior a 40 anos

  $\Omega = \{(x,y) | x\gt 20 \and y \gt 20;  x,y \in \mathbb{N} \}$

  $\Omega = \{(x,y): x>20;y>20\}$ **<u>Resposta do professor</u>**

  

  - A. $\Omega = \{(x,y): x>50;y>20\}$

    ![image-20221110164225801](/home/sebastian/.config/Typora/typora-user-images/image-20221110164225801.png)

  - B. $\Omega = \{(x,y): x>20;y>20; x>y\}$

    ![image-20221110165557686](/home/sebastian/.config/Typora/typora-user-images/image-20221110165557686.png)

  - C. $\Omega = \{(x,y): x>20;y>40\}$

    <img src="/home/sebastian/.config/Typora/typora-user-images/image-20221110164842625.png" alt="image-20221110164842625"  />

- Suponha que uma loja abre as 9h e encerra as 19h. Um cliente entra nessa loja no momento $x$ e sai no momento $y$. Defina analítica e graficamente o espaço do resultado.

  $\Omega = \{x,y: 19>y>x>9\}$

<img src="/home/sebastian/.config/Typora/typora-user-images/image-20221110170524805.png" alt="image-20221110170524805"  />

