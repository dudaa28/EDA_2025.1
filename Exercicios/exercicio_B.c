// 1° EXERCÍCIO: Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro.

int somaDigitos(int n){
    if(n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) + somaDigitos(n/10);

    }
}

/*2° EXERCÍCIO: Escreva uma função recursiva que calcule o produto de dois números 
inteiros positivos a e b, usando apenas somas e subtrações. */

#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0; 
    } else {
        return a + produto(a, b - 1); 
    }
}

/* 3° EXERCICIO: Escreva uma função recursiva que calcule o valor de x elevado à potência n, onde x e n são
números inteiros positivos. Você deve usar apenas operador de multiplicação. */

int potencia(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * potencia(x, n - 1);
}

/* 4° EXERCICIO: Escreva uma função recursiva que determine se uma string é um palíndromo 
(ou seja, se pode ser lida igualmente de trás para frente).*/

#include <string.h>

int ehPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim)
        return 1;
    if (str[inicio] != str[fim])
        return 0;
    return ehPalindromo(str, inicio + 1, fim - 1);
}

/*5° EXERCICIO: Escreva uma função recursiva que calcule o máximo divisor comum (MDC) de dois números 
inteiros. */

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}


/*6° EXERCICIO: Escreva uma função recursiva que calcule o maior elemento em uma vetor de inteiros. */

int maiorElemento(int vetor[], int n) {
    if (n == 1)
        return vetor[0];

    int maxResto = maiorElemento(vetor, n - 1);
    return (vetor[n - 1] > maxResto) ? vetor[n - 1] : maxResto;
}

/*7° EXERCICIO: Escreva uma função recursiva que encontre a posição de um elemento v em um vetor 
V desordenado. */

int buscarDesordenado(int vetor[], int n, int v, int i) {
    if (i >= n)
        return -1;
    if (vetor[i] == v)
        return i;
    return buscarDesordenado(vetor, n, v, i + 1);
}


/*8° EXERCICIO: Escreva uma função recursiva que encontre a posição de um elemento v 
em um vetor V ordenado. */

int buscarOrdenado(int vetor[], int inicio, int fim, int v) {
    if (inicio > fim)
        return -1;

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == v)
        return meio;
    else if (vetor[meio] > v)
        return buscarOrdenado(vetor, inicio, meio - 1, v);
    else
        return buscarOrdenado(vetor, meio + 1, fim, v);
}