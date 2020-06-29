# Aprendi-FFT
Tiago (tfg) está muito feliz pois conseguiu aprender um algoritmo novo conhecido como FFT. Ele basicamente consegue multiplicar dois polinômios de maneira muito rápida. Agora ele pede sua ajuda para verificar se a resposta do seu algoritmo está certa. Você vai receber dois polinômios deve responder a multiplicação destes dois polinômios.

Embora tfg esteja usando o algoritmo FFT, ele quer que você use o algoritmo convencional para computar a multiplicação dos dois polinômios.

Um polinômio de grau n é representado por:

A(x) = a0 x⁰ + a1 x¹ + … + an x^n

Exemplo de multiplicação de polinômios:

A(x) = 5 + 3x + 2x²

B(x) = 3 + 0x + 3x² + x³

C(x) = A(x) * B(x)

C(x) = (5 + 3x + 2x²) * (3 + 0x + 3x² + x³)

C(x) = 15 + 9x + 21x² + 14x³ + 9x⁴ + 2x⁵

Este exemplo é o primeiro caso mostrado abaixo.

Formato de entrada

A entrada consiste de vários casos de teste, e deve ser lida até EOF.

Na primeira linha de cada caso  temos dois inteiros n e m (2 <= n, m <= 1000) que são os graus dos polinômios A e B, respectivamente.

Na segunda linha  de cada caso temos n+1 inteiros que são os coeficientes a0, a1, a2, … , an  do primeiro polinômio.

Na terceira linha de cada caso temos m+1 inteiros que são os coeficientes b0, b1, b2, … , bm  do segundo polinômio.

Formato de saída

A saída deve conter uma linha para cada caso com n+m+1 inteiros que são os coeficientes c0, c1, … , cn+m do polinômio C(x) = A(x) * B(x)  seguindo o formato dado no exemplo.
