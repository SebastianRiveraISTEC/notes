# Grafos

Um grafo é um modelo da matemática discreta que é constituído por vértices ligados por segmentos de reta chamados arestas.

**Digrafos** são grafos dirigidos ou orientados



### Exercício

Represente numa matriz o numero de arestas de vértices adjacentes
$$
A^1 =\begin{bmatrix} 0 && 1 && 0\\ 0 && 0 && 1\\0 && 0 && 0\end{bmatrix}
$$
O expoente da matriz de adjacência indica o comprimento dos caminhos



### Exercício

Quantos caminhos de comprimento 2 existem?

1. $v_1 \rightarrow v_2 \rightarrow v_3$

$$
A^2 =A.A=\begin{bmatrix} 0 && 0 && 1\\ 0 && 0 && 0\\0 && 0 && 0\end{bmatrix}
$$

Determine o numero de caminhos de comprimento 3
$$
A^3 = A^2.A = \begin{bmatrix} 0 && 0 && 0\\ 0 && 0 && 0\\0 && 0 && 0\end{bmatrix}
$$


Determine a matriz de adjacência deste grafo
$$
A = \begin{bmatrix} 1 && 1 && 0\\ 1 && 1 && 1\\0 && 1 && 1\end{bmatrix}
$$
