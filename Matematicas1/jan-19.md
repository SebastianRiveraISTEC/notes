# Exercicios algebra lineal



### Ex 

Determinar a inversa desta matriz
$$
A=\begin{bmatrix}1&&0 &&0\\0&&5&&0\\0&&0&&10 \end{bmatrix}
$$

$$
A^{-1} = \begin{bmatrix}1&&0&&0\\0&&0.2&&0\\0&&0&&0.1 \end{bmatrix}
$$


## Representação matricial das equações e dos sistemas de equações

### Exercicio

Represente esta equação $2x - y = 10$ de uma forma matricial
$$
\begin{bmatrix}2&&-1\end{bmatrix}.\begin{bmatrix}x \\ y \end{bmatrix}=10
$$

### Exercicio

Considere o sistema de equações
$$
x = y\\2z-2=5
$$
Escrever o sistema em notação matricial
$$
\begin{bmatrix}1 && -1 && 0\\0&&0 &&2 \end{bmatrix} . \begin{bmatrix}x \\ y\\z \end{bmatrix} = \begin{bmatrix}0 \\7\end{bmatrix}
$$

### Exercicio

Generalize esta forma matricial
$$
XB = Y
$$
Para $n$ equações e $k$ incognitas
$$
\begin{bmatrix}x_{11} && x_{12} &&...&&x_{1k}\\x_{21} && x_{22} &&...&&x_{2k}\\ \vdots &&\vdots &&\vdots &&\vdots\\x_{n1} &&x_{n2} &&...&& x_{nk} \end{bmatrix}.\begin{bmatrix}b_1\\b_2\\ \vdots\\b_k \end{bmatrix} = \begin{bmatrix}y_1\\y_2\\\vdots\\y_n \end{bmatrix}
$$

### Exercicio

Considere 2 observações sobre as variaveis $x$ e $y$

| x    | y    |
| ---- | ---- |
| 3    | 2    |
| 4    | 3    |

Em que $x$ é o rendimento e o $y$ é o consumo de duas familias num determinado ano. 

a) Escreva de uma forma matricial a seguinte função $y = a+bx$

b) A traves dessa forma matricial determine as incognitas $a$ e $b$



a)
$$
\begin{bmatrix} 1 && 3\\1 && 4\end{bmatrix}.\begin{bmatrix}a\\b \end{bmatrix} = \begin{bmatrix} 2\\3\end{bmatrix}
$$
b) 
$$
\left[\begin{array}{@{}cc|c@{}} 1&3&2\\1&4&3 \end{array}\right] = \left[\begin{array}{@{}cc|c@{}} 1&3&2\\0&1&1 \end{array}\right] = \left[\begin{array}{@{}cc|c@{}} 1&3&2\\0&3&3 \end{array}\right] = \left[\begin{array}{@{}cc|c@{}} 1&0&-1\\0&1&1 \end{array}\right]
$$
 