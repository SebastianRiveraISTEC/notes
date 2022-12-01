Exercício 1

Considere a seguinte função:
$$
y_t = a + e^{x_tb}, \\ (t=1,2,3,...,n)
$$
Caraterize a função: É uma função não linear, exponencial, em que a variável dependente é $ y_t $ e a variável independente e $x_t$

Proceda a linearização daquela função

$$
y_t-a =e^{x_tb}\\

\ln{(y_t-a)} = \ln{(e^{x_tb})}\\
\ln{(y_t-a)} = x_tb
$$

Faça um esboço gráfico da função linearizada

<img src="/home/sebastian/.config/Typora/typora-user-images/image-20221103145824952.png" alt="image-20221103145824952" style="zoom:67%;" />



## Operador somatório

É um instrumento que nos permite sintetizar uma soma sucessiva

### Exercício

Considere a seguinte função
$$
y_t = a+bx_t,\\
(t=1,2,3,...,n)
$$
a) Escreva aquela função de forma desagregada para cada um dos valores de $t$
$$
y_1 = a+bx_1, \\
y_2 = a+bx_2, \\
\vdots\\
y_n = a+bx_n \\
$$
b) Proceda a soma ordenada destas $n$ equações:
$$
y_1 = a+bx_1\,+\\
y_2 = a+bx_2 \\
\vdots\\
y_n = a+bx_n \\
=\\
y_1 + y_2 + ...+y_n=n\times a + b(x_1+x_2+...+x_n)
$$

$$
\sum_{t=1}^{n}y_t = \sum_{t=1}^{n}a+bx_t
$$

### Regras

- Somatório de uma constante é $n\times$constante
- $\sum_{t=1}^{n}bx_t = b\sum_{t=1}^{n}x_t$

### Exercício

$$
y_i = 4 -2x_t+3w_t-5z_t,\\
t=(1,2,3,4)
$$

a) Caraterize aquela função

É uma função linear em que a variável dependente é $ y_t $ e as variáveis independentes e $x_t,w_t,z_t$ e $y_t$ é função de $x_t,w_t\text{ e }z_t$

b) Aplique o operador somatório a aquela função
$$
\sum_{t=1}^{4}y_t=\sum_{t=1}^{4}(4-2x_t+3w_t-5z_t)\\
\sum_{t=1}^{4}y_t=16-2\sum_{t=1}^{4}x_t +3\sum_{t=1}^{4}w_t -5\sum_{t=1}^{4}z_t
$$

## Operador Produtório

 Produto sucessivo
$$
x_1\times x_2 \times ... \times x_n = \prod_{t =1}^{n}x_t
$$
Qual é a definição de fatorial?

Fatorial é uma sucessão de produtos onde $k$ varia de um em um. 

$n! = \prod_{k=1}^{n}k$

#### Exercício

Calcule 3!

a) Pela definição de fatorial
$$
3! = \prod_{k=1}^{3}k\\
3! = 1\times 2 \times 3\\
3! = 6
$$

b) Pela formula de calculo que aprenderam 

$$
3! =3\times 2\times 1 = 6
$$

#### Exercício

a) Calcule esta expressão
$$
\frac{5!}{3!}
$$

$$
\frac{5\times4\times \cancel{3!}}{\cancel{3!}}\therefore \frac{5!}{3!} =20
$$
b) Transforme o operador produtório no operador somatório
$$
\prod_{i=1}^{n} x_i
$$

$$
\prod_{i=1}^{n}x_i = x_1 \times x_2 \times ... \times x_n \\
log(\prod_{i=1}^{n}x_i )=log{(x_1 \times x_2 \times ... \times x_n)} = log{(x_1)} + log{(x_2)} + ... + log{(x_n)}\\
log(\prod_{i=1}^{n}x_i )= log{(x_1)} + log{(x_2)} + ... + log{(x_n)} = \sum_{n=1}^{n}log(x_n)
$$


## Importante

O operador logaritmo transforma series geométricas em series aritméticas desde que a base de logaritmo seja igual à razão da serie geométrica.  Ex.


$$
\bar{X}_A = \frac{\sum_{i=1}^{N}X_i}{N}\\
\bar{X}_G = (\prod_{i=1}^{N}X_i)^\frac{1}{N}\\

log(\bar{X}_G) = \frac{1}{N} log (\prod_{i=1}^{N}X_i)\\
log(\bar{X}_G) = \frac{1}{N}\sum_{i=1}^{N}log(X_i)\\
\because log(\prod_{i=1}^{n}x_i )=\sum_{n=1}^{n}log(x_n)
$$


Ex. 
