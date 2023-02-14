
## Operadores Matemáticos

### Operações

| Graus | Diretas       | Inversas   |
| ----- | ------------- | ---------- |
| 1°    | Adição        | Substração |
| 2°    | Multiplicação | Divisão    |
| 3°    | Potenciação   | Radiciação/Logaritmação|

### Operadores

1. Sumatorio ($\sum$)
	1. $$x_1+x_2+...+x_n = \sum^n_{t=1}x_t$$
	2. EXERCICIO
	Aplique o operador sumatorio à seguinte expressão
	$$
	\begin{aligned}
	&y_t = a+bx_t\\
	&(t=1,2,...,n)
	\end{aligned}$$
	RESOLUÇÃO
	$$
	\begin{aligned}
	\sum^n_{t=1}y_t &= \sum^n_{t=1}(a+bx_t)\\
	&= \sum^n_{t=1}a + b\sum^n_{t=1}x_t\\
	&=\underset{n\times a}{\underline{\sum^n_{t=1}a}} + b\sum^n_{t=1}x_t\\
	\sum^n_{t=1}y_t &= n\times a+ b\sum^n_{t=1}x_t
	\end{aligned}
	$$
2. Produtório($\prod$)
	1. $$x_1\times x_2\times ... \times x_n = \prod^n_{t=1}x_t$$
	2. EXERCICIO
	Através do operador produtório, defina $n!$
	
	RESOLUÇÃO
	$$n!= \prod^n_{k=1}k$$
3. Potenciação
	1. Propriedades
		1. $a^m\times a^n = a^{m+n}$
		2. $(a\times b)^n = a^n\times b^n$
		3. $(a^m)^n=a^{mn}$
4. Radiciação
	1. Definição
			dada a **potencia**, determina-se a **base**
			$a = b^n \rightarrow b=\sqrt[n]{a}$
5. Logaritmação
	1. Definição
			dada a **potencia**, determina-se o **expoente**
			$a=b^n \rightarrow n=\log_ba$
	2. Propriedades
		1. $\log(x\times y)= \log x + \log y$
		2. $\log(\frac{x}{y}) = \log x - \log y$
		3. $\log x^y = y\log x$
		4. $\log_x x = 1$
	3. Variações
		1. Logaritmo decimal (base 10) $\rightarrow \log$
		2. Logaritmo natural (base $e$) $\rightarrow \ln$
		3. Logaritmo binario (base 2) $\rightarrow \lg$
	4. EXERCICIO
		a. Caraterize a seguinte função:
		$$y=ae^{bx}$$ b. Proceda a linearização dessa função
		
		RESOLUÇÃO
		a) Função exponencial, em que $y$ é a variável dependente e $x$ é a variável independente
		
		b) 
		$$\begin{aligned}\ln y &= \ln(ae^{bx})\\&=\ln a + bx\times \underset{1}{\underline{\ln e}}\\\ln y &= \ln a + bx \end{aligned}$$
	5. EXERCICIO
		a) Caraterize a seguinte função:
		$$ y = ax^b$$
		b) Proceda a linearização dessa função
		
		
		RESOLUÇÃO
		
		a) Função potência em que $y$ é a variável dependente e $x$ é a variável independente
		
		b) 
		$$\begin{aligned}\ln y &= ln(ax^b)\\ &= \ln a + b\ln x \\ \ln y &= \ln a+b\ln x
		\end{aligned}$$
-------------------------------
## Algebra Booleana

### Operações lógicas

1. Conjunção ($\wedge$)
	1. O resultado de $P_1 \wedge P_2$ é verdadeiro quando ambas preposições são verdadeiras
2. Disjunção (inclusiva) ($\vee$)
	1. O resultado de $P_1 \vee P_2$ é falso quando ambas preposições são falsas
3. Disjunção (exclusiva) ($\veebar$ / $\oplus$)
	1. O resultado de $P_1 \oplus P_2$ é verdadeiro quando ambas preposições são diferentes
4. Condicional ($\rightarrow$)
	1. O resultado de $P_1 \rightarrow P_2$ é falso quando o antecedente $P_1$ é verdadeiro e a consequente $P_2$ é falso
5. Bicondicional($\leftrightarrow$)
	1. O resultado de $P_1 \leftrightarrow P_2$ é verdadeiro quando $P_1$ e $P_2$ são ambas verdadeiras ou ambas falsas

## Conceitos Relacionados com Proposições e Operadores Lógicos

1. Contradição
	1. Toda a proposição composta cujo valor lógico é sempre **FALSO**, independentemente dos valores lógicos das proposições simples que a compõem.
	2. Ex. $p\wedge \neg p$
2. Tautologia
	1. Toda a proposição composta cujo valor lógico é sempre **VERDADEIRO**, independentemente dos valores lógicos das proposições simples que a compõem
	2. Ex. $p \vee \neg p$
3. Contingência
	1. Toda a proposição composta que não  é tautologia nem contradição
	2. Ex. $p\rightarrow \neg p$
-----------
## Análise Combinatoria

### Combinações simples (ordem não interessa)

Numero de maneiras de extrair mostras de $n$ objetos de uma "caixa" com $m$ objetos

**Formula**
$$
{m\choose n} = \frac{m!}{n!(m-n)!}
$$
#### Com reposição/Combinações completas (permite repetidos)
**Formula**
$${m\choose n}' = \frac{(m+n-1)!}{n!(m-1)!}$$
### Arranjos simples (ordem interessa)

Numero de maneiras de agrupar ordenadamente $n$ objetos que podemos formar com parte de $m$ objetos que pertencem a um conjunto.

**Formula**

$$ _{m}P_{n} = (m_n)= \frac{m!}{(m-n)!}$$
#### Com reposição/Arranjos completos (permite repetidos)

$$ _{m}P'_{n} = (m_n)'= m^n$$


### Caso extra
As **permutações** são um caso particular dos arranjos simples, quando:
$m=n$, pelo que
$$ P_m = (m_n) = \frac{m!}{(m-m)!} = \frac{m!}{0!} = m!$$

### Coeficientes Binomiais
1. Definição de binomio: Binomio é uma expressão com dois termos. Por exemplo: $x+y$
2. Binomio de Newton: Permite escrever o polinomio correspondente à potência de um binomio. Representado de forma generalizada por: $(x+y)^m$
3.  Triangulo de Pascal

$$\begin{array}{c}
1 \\
1 \quad 1 \\
1 \quad 2 \quad 1 \\
1 \quad 3 \quad 3 \quad 1 \\
1 \quad 4 \quad 6 \quad 4 \quad 1 \\
1 \quad 5 \quad 10 \quad 10 \quad 5 \quad 1 \\
1 \quad 6 \quad 15 \quad 20 \quad 15 \quad 6 \quad 1 \\
1 \quad 7 \quad 21 \quad 35 \quad 35 \quad 21 \quad 7 \quad 1 \\
\end{array}$$
$$\begin{array}{lc}
(x+y)^0= &
{\color{Red}\boldsymbol{1}} 
\\
(x+y)^1=  & 
{\color{Red}\boldsymbol{1}}x+{\color{Red}\boldsymbol{1}}y
\\
(x+y)^2=  &
{\color{Red}\boldsymbol{1}}x^2+{\color{Red}\boldsymbol{2}}xy+{\color{Red}\boldsymbol{1}}y^2
\\
(x+y)^3=  &
{\color{Red}\boldsymbol{1}}x^3+{\color{Red}\boldsymbol{3}}x^2y+{\color{Red}\boldsymbol{3}}xy^2+{\color{Red}\boldsymbol{1}}y^3
\\
(x+y)^4=  &
{\color{Red}\boldsymbol{1}}x^4+{\color{Red}\boldsymbol{4}}x^3y+{\color{Red}\boldsymbol{6}}x^2y^2+{\color{Red}\boldsymbol{4}}xy^3+ {\color{Red}\boldsymbol{1}}y^4
\\                                     
\end{array}$$
A soma em linha é dada por $2^k$, para $k=0,1,2,3,...$ ($k =$ expoente). Assim, temos:

$$
\begin{aligned}
k=0 &\quad\rightarrow 2^0 = 1\\
k=1 &\quad\rightarrow 2^1 = 2 \quad(=1+1)\\
k=2 &\quad\rightarrow 2^2 = 4\quad(=1+2+1)\\
k=3 &\quad\rightarrow 2^3 = 8\quad(=1+3+3+1)\\
\vdots
\end{aligned}
$$
Em termos gerais, o **binomio de Newton** é desenvolvido seguido a seguinte fórmula:

$$
(x+y)^m = \sum^m_{n=0}{m\choose n} x^{m-n}y^n
$$
em que
$$
{m\choose n} = \frac{m!}{n!(m-n)!}
$$
EXERCICIO

Proceda ao desenvolvimento da expressão $(x+y)^3$ e identifique os coeficientes binomiais através da formula.

RESOLUÇÃO

$$
\begin{aligned}
(x+y)^3 &= {3\choose 0} x^{3-0}y^0+{3\choose 1}x^{3-1}y^1+{3\choose 2}x^{3-1}y^2+{3\choose3}x^{3-3}y^3\\
&= {3\choose 0}x^3\times1+{3\choose1}x^2y+{3\choose2}xy^2+{3\choose3}1\times y^3
\end{aligned}
$$
Em que os coeficientes binomiais são

$$
\begin{aligned}
{3\choose0} &= \frac{3!}{0!(3-0)!} = \frac{\not{3!}}{1\times \not{{3!}}} = \underline{\underline{1}}\\
{3\choose1} &= \frac{3!}{1!(3-1)!} = \frac{3!}{1\times 2} = \frac{3\times\not{2!}}{\not{2!}} =  \underline{\underline{3}}\\
{3\choose 2} &= \frac{3!}{2!(3-2)!} = \frac{3\times\not{2!}}{\not{2!}1!} = \underline{\underline{3}}\\
{3\choose3} &= \frac{3!}{3!(3-3)!} = \frac{\not{3!}}{\not{3!}0!} = \underline{\underline{1}}
\end{aligned}
$$

Temos então o desenvolvimento de $(x+y)^3$:
$$
(x+y)^3 = x^3 + 3x^2y+3xy^2+y^3
$$

---

## Matrizes e Vetores

Considere a seguinte função bidimensional:


$$
f(x,y) = x+y
$$
em que
$$
\begin{aligned}
x &= 0;1\\
y &= 2;3;4
\end{aligned}
$$
Esta função pode ser representada numa tabela de dupla entrada

|  x\\y | 2 | 3 | 4 |
|----|----|----|----|
| 0| 2| 3|4|
|1|3|4|5|

Obtemos seguinte matriz:

$$
\begin{bmatrix}2&3&4\\3&4&5\end{bmatrix}
$$
### Dimensão da matriz

$$
\begin{aligned}
\text{2 linhas} \times \text{3 colunas} \rightarrow(&2\qquad\times&&3)\\
&\downarrow &&\downarrow\\
&linhas&&colunas
\end{aligned}
$$

**Escalar** $\rightarrow$ É um elemento genérico da matriz:
$$
\begin{aligned}
a_{ij}\\
\text{linha}\; i &=1;2\\
\text{coluna}\; j &= 1;2;3
\end{aligned}
$$
$$
A=\begin{bmatrix}a_{11}&a_{12}&a_{13}\\a_{21}&a_{22}&a_{23}\end{bmatrix}
$$
em que

$$
\begin{aligned}
a_{11} = 2 \qquad a_{12} &= 3 \qquad a_{13} = 4\\
a_{21} = 3 \qquad a_{22} &= 4 \qquad a_{23} = 5
\end{aligned}
$$

**EM TERMOS GERAIS, TEMOS:**

$$
A = \begin{bmatrix}a_{11} & a_{12} &... &a_{1n}\\a_{21}&a_{22}&...&a_{2n}\\ \vdots & \vdots & & \vdots\\a_{m1}&a_{m2}&...&a_{mn} \end{bmatrix}
$$

$$
\begin{aligned}
(&m\qquad \times &&n)\rightarrow \text{matriz retangular}\\
&\downarrow &&\downarrow\\
&\text{linhas} &&\text{colunas}
\end{aligned}
$$
### Elemento genérico da matriz
$$
\begin{aligned}
a_{ij} \qquad &i=1,2,...,m \;\text{linhas}\\
&j = 1,2,...,n \; \text{colunas}
\end{aligned}
$$
Exemplos

$$
\begin{aligned}
A= &\begin{bmatrix}1&2&3\\2&0&4\end{bmatrix} \qquad B=&&\begin{bmatrix}1 & 6\\0&1\\1&1 \end{bmatrix}\\
&\quad(2\times3) &&\;(3\times2)
\end{aligned}
$$

### Casos particulares de matrizes

#### Matriz quadrada ($m=n$)

Numero de linhas é igual ao numero de colunas

$$
\begin{aligned}
A = &\begin{bmatrix}a_{11} & a_{12} &... &a_{1n}\\a_{21}&a_{22}&...&a_{2n}\\ \vdots & \vdots & & \vdots\\a_{n1}&a_{n2}&...&a_{nn} \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo
$$
\begin{aligned}
A= &\begin{bmatrix}1&2\\3&0 \end{bmatrix}\\
&(2\times 2)
\end{aligned}
$$

#### Matriz diagonal

$$
\begin{aligned}
A = &\begin{bmatrix}a_{11} & 0 &... &0\\0&a_{22}&...&0\\ \vdots & \vdots & & \vdots\\0&0&...&a_{nn} \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo
$$
\begin{aligned}
A= &\begin{bmatrix}1&0\\0&3 \end{bmatrix}\\
&(2\times 2)
\end{aligned}
$$

#### Matriz escalar

A matriz escalar é uma matriz diagonal em que:
$$
a_{11} = a_{22} = ... =a_{nn} = a
$$
$$
\begin{aligned}
A = &\begin{bmatrix}a & 0 &... &0\\0&a&...&0\\ \vdots & \vdots & & \vdots\\0&0&...&a \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo:

$$
\begin{aligned}
A= &\begin{bmatrix}2&0\\0&2 \end{bmatrix}\\
&(2\times 2)
\end{aligned}
$$
#### Matriz identidade

A matriz identidade $(I)$ é uma matriz escalar em que $a=1$

$$
\begin{aligned}
A = &\begin{bmatrix}1 & 0 &... &0\\0&1&...&0\\ \vdots & \vdots & & \vdots\\0&0&...&1 \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo:
$$
\begin{aligned}
I= &\begin{bmatrix}1&0\\0&1 \end{bmatrix}\\
&(2\times 2)
\end{aligned}
$$

#### Matriz triangular superior

$$
\begin{aligned}
A = &\begin{bmatrix}a_{11} & a_{12} &... &a_{13}\\0&a_{22}&...&a_{2n}\\ \vdots & \vdots & & \vdots\\0&0&...&a_{nn} \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo:
$$
\begin{aligned}
A = &\begin{bmatrix}3&-1&5\\0&2&4\\0&0&-2\end{bmatrix}\\
&\qquad(3\times3)
\end{aligned}
$$

#### Matriz triangular inferior
$$
\begin{aligned}
A = &\begin{bmatrix}a_{11} & 0 &... &0\\a_{21}&a_{22}&...&0\\ \vdots & \vdots & & \vdots\\a_{n1}&a_{n2}&...&a_{nn} \end{bmatrix}\\
&\qquad\qquad(n\times n)
\end{aligned}
$$
Exemplo:
$$
\begin{aligned}
A = &\begin{bmatrix}2&0&0\\8&-1&0\\-5&3&0\end{bmatrix}\\
&\qquad(3\times3)
\end{aligned}
$$
#### Matriz idempotente

$$
\begin{aligned}
A = A^2 = A^3 = ...\\
A= AA= AAA=...
\end{aligned}
$$
Exemplo:

Matriz identidade ($I$) é uma matriz idempotente:
$$
I = I.I = I.I.I = ...
$$

### Traço de uma matriz quadrada

$$
Tr(A) = \sum^n_{i=1}a_{ii}
$$
Exemplo:
$$
\begin{aligned}
A=&\begin{bmatrix}1&2\\0&2\end{bmatrix}\\
&(2\times2)\\ \\
Tr(A) = 1+2 = \underline{\underline{3}}
\end{aligned}
$$

---
## Operações com matrizes

#### Soma Algébraica

**CONDIÇÃO**: As matrizes têm de ser de igual dimensões

$$
\begin{aligned}
A = &\begin{bmatrix}5&4\\0&2\\1&-1\end{bmatrix} \qquad B = &&\begin{bmatrix}0&-2\\5&-3\\-1&0\end{bmatrix}\\
&\;\;\;(3\times2) &&\quad(3\times2)
\end{aligned}
$$
$$
\begin{aligned}
(A+B) = &\begin{bmatrix}5&2\\5&-1\\0&-1\end{bmatrix}\\
&\;\;(3\times2)
\end{aligned}
$$
$$
\begin{aligned}
(A-B) = &\begin{bmatrix}5&6\\-5&5\\2&-1\end{bmatrix}\\
&\;\;(3\times2)
\end{aligned}
$$
#### Multiplicação de matrizes

**CONDIÇÃO**: O número de colunas da primeira matriz tem de ser igual do número de linhas da segunda matriz. (Multiplica-se linha por coluna)

Exercicio

Com as seguintes matrizes

$$
\begin{aligned}
A = &\begin{bmatrix}1&2&3\\2&0&4\end{bmatrix} \qquad B = &&\begin{bmatrix}1&6\\0&1\\1&1\end{bmatrix}\\
&\quad(\textcolor{red}{2}\times\underline{3}) &&\;(\underline{3}\times\textcolor{red}{2})
\end{aligned}
$$
Efetue a seguinte operação $A.B$

RESOLUÇÃO
$$
\begin{aligned}
A.B &= \begin{bmatrix}1\times1+2\times0+3\times1 & 1\times6+2\times1+3\times1\\\\
2\times1+0\times0+4\times1 & 2\times6+0\times1+4\times1\end{bmatrix} =\\ \\
&= \begin{bmatrix}4 & 11\\6&16\end{bmatrix}\\
&\quad\;\;(\textcolor{red}{2}\times\textcolor{red}{2})
\end{aligned}
$$

Efetue a seguinte operação $B.A$
$$
\begin{aligned}
B.A = &\begin{bmatrix}1&6\\0&1\\1&1\end{bmatrix}&\begin{bmatrix}1&2&3\\2&0&4\end{bmatrix} &= \\
&\;(\textcolor{red}{3}\times\underline{2}) &(\underline{2}\times \textcolor{red}{3})
\end{aligned}
$$
$$
\begin{aligned}
&= \begin{bmatrix}1\times1+6\times 2&1\times2+6\times0 & 1\times3+6\times4\\0\times1+1\times2&0\times2+1\times0&0\times3+1\times4\\1\times1+1\times2&1\times2+1\times0&1\times3+1\times4\end{bmatrix}\\\\

&= \begin{bmatrix}13 & 2 &27\\2&0&4\\3&2&7\end{bmatrix}\\
&\qquad\quad(\textcolor{red}{3}\times\textcolor{red}{3})
\end{aligned}

$$
#### Matriz transposta ($A' \equiv A^T$)

Dada a seguinte matriz:
$$
\begin{aligned}
A = \begin{bmatrix}1&2&3\\2&0&4\end{bmatrix}
\end{aligned}
$$
A sua transposta é:
$$
\begin{aligned}
A' = \begin{bmatrix}1&2\\2&0\\3&4\end{bmatrix}
\end{aligned}
$$
**Matriz simétrica**
Matriz simétrica é a que satisfaz a seguinte igualdade:
$$
A' = A
$$
Exemplo
$$
\begin{aligned}
A &= \begin{bmatrix}1&-1&4\\-1&0&3\\4&3&2\end{bmatrix}\\\\
A' &= \begin{bmatrix}1&-1&4\\-1&0&3\\4&3&2\end{bmatrix}\\\\
&A=A'
\end{aligned}
$$
#### Determinante de uma matriz

O determinante de uma matriz (tem de ser quadrada) é o valor numérico dessa matriz
$$
|A| \equiv det\,A
$$
Exercicio
Leja a seguinte matriz
$$
\begin{aligned}
A=&\begin{bmatrix}2&1\\3&0\end{bmatrix}\\
&(2\times2)
\end{aligned}
$$
O determinante é:
$$
|A| = 2\times0 - 3\times1 = 0-3 = \underline{\underline{-3}}
$$

#### Matriz dos cofatores($cof\,A$)

Leja a seguinte matriz:
$$
\begin{aligned}
A = &\begin{bmatrix}2&1\\3&0\end{bmatrix}\\
&(2\times2)
\end{aligned}
$$
A matriz dos cofatores é:
$$
cof\,A = \begin{bmatrix}0&-3\\-1&2\end{bmatrix}
$$
Sinal $\pm$:
- O sinal é **+** quando a soma das ordens da linha e da coluna **É PAR**
- O sinal é **-** quando a soma das orden da linha e da coluna **É IMPAR**

Exercicio


Considere a seguinte matriz

$$
\begin{aligned}
A = &\begin{bmatrix}3&2&4\\7&3&1\\5&2&2\end{bmatrix}\\
&\quad\,(3\times3)
\end{aligned}
$$
a) Calcule a matriz dos cofatores
b) Calcule o determinante da matriz $A$

RESOLUÇÃO

a)

$$
\begin{aligned}
cof\, A &= \begin{bmatrix}\begin{vmatrix}3&1\\2&2\end{vmatrix}&-\begin{vmatrix}7&1\\5&2\end{vmatrix}&\begin{vmatrix}7&3\\5&2\end{vmatrix}\\
-\begin{vmatrix}2&4\\2&2\end{vmatrix}&\begin{vmatrix}3&4\\5&2\end{vmatrix}&-\begin{vmatrix}3&2\\5&2\end{vmatrix}\\
\begin{vmatrix}2&4\\3&1\end{vmatrix}&-\begin{vmatrix}3&4\\7&1\end{vmatrix}&\begin{vmatrix}3&2\\7&3\end{vmatrix}
\end{bmatrix}\\\\
&= \begin{bmatrix}4&-9&-1\\4&-14&4\\-10&25&-5\end{bmatrix}
\end{aligned}
$$
b)
$$
\begin{aligned}
|A| = \begin{vmatrix}3&2&4\\7&3&1\\5&2&2\end{vmatrix} &= 3\times \underset{4}{\underline{\begin{vmatrix}3&1\\2&2\end{vmatrix}}} -2\times\underset{9}{\underline{\begin{vmatrix}7&1\\5&2\end{vmatrix}}}+4\times\underset{-1}{\underline{\begin{vmatrix}7&3\\5&2\end{vmatrix}}} =
\\\\
&= 3\times4 - 2\times9 + 4\times(-1)\\\\

&=  12 -18 - 4 = 12-22 = -10
\end{aligned}
$$

#### Matriz Adjunta ($Adj$)

$$
Adj\,A = (cof\,A)^\prime
$$
Exemplo:
Leja a matriz
$$
A = \begin{bmatrix}3&2&4\\7&3&1\\5&2&2\end{bmatrix}
$$
$$
Adj\,A = \left(\overset{cof\,A}{\overline{\begin{bmatrix}4&-9&-1\\4&-14&4\\-10&25&-5\end{bmatrix}}}\right)^{\prime}= \begin{bmatrix}4&4&=10\\-9&-14&25\\-1&4&-5\end{bmatrix}
$$
#### Matriz inversa

A matriz inversa de $A$ é $A^{-1}$, tal que:
$$
A.A^{-1} = I \rightarrow \text{matriz identidade}
$$

Exercício

Através da definição, determine a matriz inversa de $A$

$$
A= \begin{bmatrix}1&2\\3&4\end{bmatrix}
$$

RESOLUÇÃO
$$
\underset{A}{\underline{\begin{bmatrix}1&2\\3&4\end{bmatrix}}}\;\;\underset{A^{-1} = ?}{\underline{\begin{bmatrix}a&b\\c&d\end{bmatrix}}} = \underset{I}{\underline{\begin{bmatrix}1&0\\0&1\end{bmatrix}}}
$$
Fazendo o produto das matrizes $A.A^{-1}$

$$
\begin{bmatrix}a+2c &&b+2d\\3a+4c&&3b+4d\end{bmatrix} = \begin{bmatrix}1&0\\0&1\end{bmatrix}
$$
Daqui resultam dois sistemas de duas equações:

$$
\begin{aligned}
&\begin{cases}a+2c=1\\3a+4c=0\end{cases} \qquad\qquad\qquad &&\begin{cases}b+2d=0\\3b+4d=1\end{cases}\\
&(\cancel{3a} - \cancel{3a})+(6c-4c) = 3-0 &&(\cancel{3b}-\cancel{3b})+ (6d-4d) =0-1\\
&2c = 3\rightarrow c= \underline{\underline{\frac{3}{2}}} &&2d=-1\rightarrow d=\underline{\underline{\frac{-1}{2}}}\\
&a=1-2c &&b=-2d\\
&a=1-\cancel{2}\times \frac{3}{\cancel{2}} &&b=-\cancel{2}\times(\frac{-1}{\cancel{2}})\\
&a=\underline{\underline{-2}} &&b=\underline{\underline{1}}
\end{aligned}
$$
$$
\therefore A^{-1} = \begin{bmatrix}-2&1\\ \frac{3}{2}&-\frac{1}{2}\end{bmatrix}
$$

#### Calculo da matriz inversa através do determinante

$$
A^{-1} = \frac{1}{|A|}\,adj\,A
$$
em que
$$
\begin{aligned}
adj\,A &= (cof\,A)^\prime\\
|A| &= \text{determinante da matriz }A
\end{aligned}
$$

Exercício

Através deste processo de inversão, determine a inversa da matriz:
$$
\begin{aligned}
A = \begin{bmatrix}1&2\\3&4\end{bmatrix}
\end{aligned}
$$
RESOLUÇÃO

$$
\begin{aligned}
cof\, A &= \begin{bmatrix}4&-3\\-2&1\end{bmatrix}\\
Adj\,A &= \begin{bmatrix}4&-3\\-2&1\end{bmatrix}^{\prime}= \begin{bmatrix}4&-2\\-3&1\end{bmatrix}\\\\

|A| &= 1\times4-3\times2 = \underline{\underline{-2}}\\\\
A^{-1} &= - \frac{1}{2}\begin{bmatrix}4&-2\\-3&1\end{bmatrix}\\\\
&= \begin{bmatrix}-2 & 1\\ \frac{3}{2} & - \frac{1}{2} \end{bmatrix}

\end{aligned}
$$
---
## Formas Quadráticas

### Definição de forma quadrática
$$
\begin{aligned}
X^{\prime}AX&,\quad\text{em que}\\\\
A&\rightarrow \text{e uma matriz simétrica}\\
X&=\begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix} \rightarrow \text{é um vetor coluna}\\
X^{\prime}&= \begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix}^{\prime}= \begin{bmatrix}x_1&x_2&\dots&x_n\end{bmatrix} \rightarrow \text{é um vetor linha}
\end{aligned}
$$
Exemplo (Matriz $A$ de ordem 2)

$$
\begin{aligned}
X^{\prime} AX &= \underset{X^{\prime}}{{\underline{\begin{bmatrix}x_1&x_2\end{bmatrix}}}} \;\underset{A}{\underline{\begin{bmatrix}a_{11}&a_{12}\\a_{12}&a_{22}\end{bmatrix}}}\; \underset{X}{\underline{\begin{bmatrix}x_1\\x_2\end{bmatrix}}}
\end{aligned}
$$
$$
\begin{aligned}
\underset{\downarrow}{\underline{\text{matriz}(\textcolor{red}{1}\times2) . \text{matriz}(2\times\textcolor{red}{2})}} . \text{matriz}(2\times1)\\
\underset{\downarrow}{\underline{\text{matriz}(\textcolor{red}{1}\times\textcolor{red}{2}) . \text{matriz}(2\times\textcolor{red}{1})}}\\

\text{matriz}(\textcolor{red}{1}\times\textcolor{red}{1})\rightarrow \text{escalar}
\end{aligned}
$$
$$
= \underline{\underline{a_{11}x^2_1+a_{22}x^2_{2}+2a_{12}x_1x_2}}
$$

Exemplo (Matriz A de ordem 3)

$$
\begin{aligned}
X^{\prime}AX&= \begin{bmatrix}x_1&x_2&x_3\end{bmatrix}\begin{bmatrix}a_{11}&a_{12}&a_{13}\\a_{12}&a_{22}&a_{23}\\a_{13}&a_{23}&a_{33}\end{bmatrix}\begin{bmatrix}x_1\\x_2\\x_3\end{bmatrix}\\\\

&= a_{11}x^2_{1}+a_{22}x^2_2+a_{33}x^2_3+2a_{12}x_1x_2+2a_{13}x_1x_3+2a_{23}x_2x_3
\end{aligned}
$$
---
## Notação Matricial de Sistemas de Equações


#### Representação de uma equação na forma matricial

$$
\textcolor{red}{3}x_1+\textcolor{red}{5}x_2\textcolor{red}{-4}x_3=\textcolor{red}{25}
$$
$$
\begin{aligned}
\begin{bmatrix}\textcolor{red}{3}&\textcolor{red}{5}&\textcolor{red}{-4}\end{bmatrix}\;\begin{bmatrix}x_1\\x_2\\x_3\end{bmatrix} = \textcolor{red}{25}
\end{aligned}
$$
#### Representação de um sistema de equações na forma matricial

$$
\cases{5x_1+3x_2=15\\4x_1-2x_2=12}
$$
$$
\begin{aligned}
\begin{bmatrix}5&3\\4&-2\end{bmatrix}\begin{bmatrix}x_1\\x_2\end{bmatrix}=\begin{bmatrix}15\\12\end{bmatrix}
\end{aligned}
$$
**Em geral**

Sistema de $m$ equações

$$
\begin{aligned}
a_{11}x_{1}+a_{12}x_{2}+\dots+a_{1n}x_{n}&= b_1\\
a_{21}x_{1}+a_{22}x_{2}+\dots+a_{2n}x_{n}&= b_2\\
\vdots\\
a_{m_{1}}x_{1}+a_{m_2}x_2+\dots+a_{m_n}x_{n}&= b_{m}
\end{aligned}
$$
#### Representação Matricial

$$
\begin{aligned}
\overset{X}{\underset{(m\times n)}{\begin{bmatrix}a_{11}&a_{12}&\dots&a_{1n}\\a_{21}&a_{22}&\dots & a_{2n}\\ \vdots &\vdots & &\vdots\\a_{m1}&a_{m2}&\dots &a_{mn}\end{bmatrix}}}\; \overset{B}{\underset{(n\times 1)}{\begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix}}} &= \overset{Y}{\underset{(m\times 1)}{\begin{bmatrix}b_1\\b_2 \\\vdots \\b_m\end{bmatrix}}}\\\\
XB &= Y
\end{aligned}
$$
Exercício

Através da forma matricial, determine os valores de $x$ e de $y$ do seguinte sistema de equações
$$
\cases{y=2x+2\\x+y=1}
$$

RESOLUÇÃO

Forma Canónica
$$
\begin{aligned}
y-2x&= 2\\
x+y &= 1
\end{aligned}
$$
Forma Matricial
$$
\begin{aligned}
\overset{X}{\overline{\begin{bmatrix}-2&1\\1&1\end{bmatrix}}} \; \overset{B}{\overline{\begin{bmatrix}x\\y\end{bmatrix}}}=\overset{Y}{\overline{\begin{bmatrix}2\\1\end{bmatrix}}}
\end{aligned}
$$
$$
\begin{aligned}
XB&= Y\\
&\downarrow\\
B&= YX^{-1}
\end{aligned}
$$

$$
\begin{aligned}
X &= \begin{bmatrix}-2&1\\1&1\end{bmatrix}\\
|X| &= det(X)\\
&= 2\times1 - 1\times1\\
&= 2-1 = \underline{\underline{-3}}
\end{aligned}
$$

$$
\begin{aligned}
cof\,X &= \begin{bmatrix}1 & -1\\-1&-2\end{bmatrix}\\
adj\,X &= (cof\,X)^{\prime}=\begin{bmatrix}1&-1\\-1&-2\end{bmatrix}\\\\

X^{-1}&= \frac{adj\,X}{|X|} = \frac{\begin{bmatrix}1&-1\\-1&-2\end{bmatrix}}{-3}\\\\

&=\begin{bmatrix}- \frac{1}{3}& \frac{1}{3}\\ \frac{1}{3}& \frac{2}{3}\end{bmatrix} 
\end{aligned}
$$

$$
B = \begin{bmatrix}x\\y\end{bmatrix}= \overset{X^{-1}}{\overline{\begin{bmatrix}- \frac{1}{3}& \frac{1}{3}\\ \frac{1}{3}& \frac{2}{3}\end{bmatrix}}}\;\overset{Y}{\overline{\begin{bmatrix}2\\1\end{bmatrix}}} = \begin{bmatrix}- \frac{2}{3}+ \frac{1}{3}\\ \frac{2}{3}+ \frac{2}{3}\end{bmatrix} = \begin{bmatrix}- \frac{1}{3}\\ \frac{4}{3}\end{bmatrix}
$$

### Metodo dos Minimos Quadrados (Descoberto por Gauss)

| x   | y   |
| --- | --- |
| 3   | 2   |
| 4   | 3    |
| 2    | 2    |

$$
\begin{aligned}
2= a+3b\\
3= a+4b\\
2= a+2b\\\\
\cases{a+3b=2\\a+4b=3\\a+2b=2}
\end{aligned}
$$
Forma Matricial

$$
\begin{aligned}
\underset{X}{\underline{\begin{bmatrix}1&3\\1&4\\1&2\end{bmatrix}}}\;\underset{B}{\underline{\begin{bmatrix}a\\b\end{bmatrix}}} =\underset{Y}{\underline{\begin{bmatrix}2\\3\\2\end{bmatrix}}}
\end{aligned}
$$
Agora a matriz $X$ não é uma matriz quadrada, **por tanto não tem inversa**. Procedemos a fazer o seguinte:

$$
\begin{aligned}
XB&= Y\\
\textcolor{red}{X^{\prime}}XB &= Y\textcolor{red}{X^{\prime}}\qquad(\text{Multiplicamos por }X^{\prime})\\\\
B &= (X^{\prime}X)^{-1}YX^{\prime}\quad (X^{\prime}X\text{ é uma matriz quadrada})
\end{aligned}
$$

$$
\begin{aligned}
X^{\prime}&= \begin{bmatrix}1&1&1\\3&4&2\end{bmatrix}\\\\
X^{\prime}X &= \begin{bmatrix}1&1&1\\3&4&2\end{bmatrix}\,\begin{bmatrix}1&3\\1&4\\1&2\end{bmatrix}\\
&= \begin{bmatrix}3&9\\9&29\end{bmatrix}
\end{aligned}
$$
$$
\begin{aligned}
cof\,(X^{\prime}X) &= \begin{bmatrix}29&-9\\-9&3\end{bmatrix}\\\\
adj\,(X^{\prime}X)&= [cof\,(X^{\prime}X)]^{\prime}\\
&= \begin{bmatrix}29&-9\\-9&3\end{bmatrix}
\end{aligned}
$$
$$
X^{\prime}Y = \begin{bmatrix}1&1&1\\3&4&2\end{bmatrix}\,\begin{bmatrix}2\\3\\2\end{bmatrix}=\begin{bmatrix}7\\22\end{bmatrix}
$$

$$
|X^{\prime}X| = 3\times29-0\times9=8+81=\underline{\underline{6}}
$$
$$
(X^{\prime})^{-1}= \frac{Adj\,(X^{\prime}X)}{|X^{\prime}X |} = \begin{bmatrix} \frac{29}{6}&-1.5\\-1.5&0.5 \end{bmatrix}
$$
$$
\begin{aligned}
\begin{bmatrix}a\\b\end{bmatrix} &=   \underset{(X^{\prime}X)^{-1}}{\underline{\begin{bmatrix} \frac{29}{6}&-1.5\\-1.5&0.5 \end{bmatrix}}}\;\underset{X^{\prime}Y}{\underline{\begin{bmatrix}7\\22\end{bmatrix}}} = \begin{bmatrix}0.83\\0.5\end{bmatrix}\\\\
y &= 0.83 + 0.5x
\end{aligned}
$$
--- 
Aqui não ha grafos :D, ler o documento do professor