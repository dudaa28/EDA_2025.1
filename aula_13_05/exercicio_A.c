/* 1° EXERCICIO: Escreva uma função recursiva que retorne a soma 
dos elementos de um vetor: long int somavet(int *a, int qtde);

Podemos pensar da seguinte forma:

* Se a lista esta vazia, retorna 0 pois a lista nao tem nenhum
elemento, qtde = 0;
* Se a lista nao esta vazia, entao, soma os elementos da lista,
podemos partir do principio de somar o primeiro elemento 
com o restante da lista.
*/

int somavet(int *a, int qtde){
    if(qtde == 0)
    {
        return 0;
    }

    else if(qtde >= 1) /* se caso meu vetor tenha um ou mais elementos, ou seja, se a quartidade do meu vetor for
    maior ou ugal a 1*/
    {
        return a[0] + somavet(a+1, qtde-1);/*Estamos acessando nossa lista de numeros, logo após acessamos com
        o primeiro numero a[0] e somamos ele com o restante da lista a partir de a+1 ate o final da lista que é 
        a quantidade de elementos restantes -1*/
    }

}

/* 2° EXERCICIO: Implemente uma função recursiva que verifique se duas strings são iguais (retorne 1) ou não (retorne 0).

        Se duas strings são vazias, elas são iguais;
        Se todos os seus caracteres são iguais, elas são iguais.
*/

/* Podemos fazer da seguinte maneira:

* Se duas strings são vazias, elas são iguais;
* Se a primeira letra é diferente da outra, elas NÃO são iguais;
* Se forem iguais, compara o resto da palavra; 
*/

int iguais(char *a, char *b){
    if(*a == '/0' && *b =='/0')

    {
        return 1; // São iguais, retorna 1
    }

    else if(*a != *b)

    {
        return 0; // Não são iguais, retorna 0
    }
    
    else iguais(a+1, b+1); //Compara o resto da palavra
}

/* 3° EXERCICIO: Escreva uma função recursiva para calcular 
o n-ésimo termo de Fibonacci.*/

/* Nesse caso se trata da sequencia de Fibonacci, ou seja, 
uma sequencia recursiva

* Se caso for 0, retorna 0;
* Se caso for 1, retorna 1;
* Senão, soma os dois anteriores: F(n-1) + F(n-2) */


int fibo(int nao){
    if(nao == 0)
    {
        return 0;
    }
    else if(nao == 1)
    {
        return 1;
    }
    else
    {
        return fibo(nao-1) + fibo(nao-2);
    }
}