# Analises Combinatório

### Exercício

Uma caixa contem 5 lâmpadas. Tiram-se 2 lâmpadas, uma a seguir da outra. Descreve no espaço de resultados os acontecimentos possíveis. 

a) Sem reposição
$$
S2 = \{(1,2),(1,3),(1,4),(1,5),(2,3),(2,4),(2,5),(3,4),(3,5),(4,5)\}\\
|S2| = 10
$$

$$
Restantes = \{123, 124, 125, 134, 135, 145, 234, 235, 245, 345\}
$$
**Formula das combinações simples** 
$$
{m \choose n} = \frac{m!}{n!(m-n)!}
$$


b) Com reposição
$$
S2 = \{(1,2),(1,3),(1,4),(1,5),(2,3),(2,4),(2,5),(3,4),(3,5),(4,5),(1,1),(2,2),(3,3),(4,4),(5,5)\}
$$
**Formula das combinações completas** 
$$
{m \choose n}' = \frac{(m+n-1)!}{n!(m-1)!}
$$


Suponha agora que as lâmpadas são distinguíveis. Efetue-se o mesmo procedimento.

a) Sem reposição
$$
S2 = \{(1,2),(1,3),(1,4),(1,5),(2,1),(2,3),(2,4),(2,5),(3,1),(3,2),(3,4),(3,5),(4,1),(4,2),(4,3),(4,5),(5,1),(5,2),(5,3),(5,4)\}
$$
**Formula dos arranjos simples**
$$
(m)_{n} = \frac{m!}{(m-n)!}
$$
b) Com reposição
$$
S2 = \{(1,2),(1,3),(1,4),(1,5),(2,1),(2,3),(2,4),(2,5),(3,1),(3,2),(3,4),(3,5),(4,1),(4,2),(4,3),(4,5),(5,1),\\(5,2),(5,3),(5,4), (1,1),(2,2),(3,3),(4,4),(5,5)\}
$$
**Formula dos arranjos completos**
$$
(m)_n^{'} = m^n
$$


### Exercício Pratico

Um inspetor tem de verificar o funcionamento de 4 maquinas. A fim de evitar que o momento das visitas seja coincido antecipadamente o inspetor resolve variar a ordenação das suas visitas. Determine o numero de casos ou esquemas possíveis de ordenação das visitas.

Permutação de 4 = 24

### Exercício

Determine o valor $x$ tal que ${x \choose 2} = 3 $
$$
\frac{x!}{2!(x-2)!} = 3\\
$$

-------------------

A partir desta afirmação: "O todo esta para a maior parte assim como a maior parte esta para o resto"
$$
\frac{x}{1} = \frac{1}{(x-1)}
$$


### Newton

$$
(x+y)^m = \sum^m_{n=0} {m \choose n} x^{m-n}y^n
$$

