# Álgebra linear



Considere a seguinte função:
$$
f(x,y) = x+y,  \\x= 0;1 \\y=1;2;3
$$
a) Caraterize aquela função

b) Represente aquela função numa tabela de dupla entrada



a) Função linear com 2 variáveis independentes discretas

|      |      |      |
| ---- | ---- | ---- |
|      | 0    | 1    |
| 1    | 1    | 2    |
| 2    | 2    | 3    |
| 3    | 3    | 4    |



## Exercício

Escreva uma matriz generalizada de dimensão $m\times n$
$$
a_{ij}, \\i = 1,2,...,m\\j=1,2,...,n
$$


$$
A = \begin{bmatrix}a_{11} & a_{12} \dots a_{1n}\\a_{21} & a_{22} \dots a_{2n}\\\vdots\\
a_{m1} & a_{m2} \dots a_{mn}\end{bmatrix}
$$



## Operações com matrizes 

#### Soma de matrizes

$$
A = \begin{bmatrix}1 & 0\\2&1\end{bmatrix} , B = \begin{bmatrix}1&3\\2&4\end{bmatrix}
$$

Proceda a somar as matrizes 
$$
A+B = \begin{bmatrix}2&3\\4&5\end{bmatrix}
$$
Tem de ser de igual tamanho



### Multiplicação de matrizes

Considere as seguintes matrizes
$$
A = \begin{bmatrix}1 & 0\\0&2\end{bmatrix} , B = \begin{bmatrix}1\\0\end{bmatrix}
$$


O numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz

$(2\times 2) . (2\times 1)$

$(m\times n) . (n\times k)$

A dimensão da matriz resultante é $n\times k$

### Exercício

Multiplicar A e B
$$
A = \begin{bmatrix}1 & 0\\0&2\end{bmatrix} , B = \begin{bmatrix}1&2\\0&0\end{bmatrix}
$$

$$
AB = \begin{bmatrix}1 & 2\\0&0\end{bmatrix}
$$


Multiplicar B e A
$$
BA = \begin{bmatrix}1 & 4\\0&0\end{bmatrix}
$$


$A^{-1}$ é uma matriz, tal que:
$$
AA^{-1} = I
$$


### Exercício

Determine a inversa da matriz:
$$
A = \begin{bmatrix}1 & 0\\1&1\end{bmatrix}
$$



$$
A^{-1} =\begin{bmatrix}a & b\\a-c&b+d\end{bmatrix}  = \begin{bmatrix}1 & 0\\-1&1\end{bmatrix}
$$


# Calculo da matriz inversa a traves do determinante

$det A = |A|$
$$
A = \begin{bmatrix}1 & 0\\1&1\end{bmatrix}\\|A|= 1\times1-0\times 1 = 1
$$

$$
cofA=\begin{bmatrix}1 & 0\\-1&1\end{bmatrix}
$$

