#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"arvore.h"
#include"criador.h"
#include"sexo.h"

/* Aluno: Caio Matheus Campos de Oliveira 1401176713*/
/* Feito com projeto de Codeblocks 13.12 ,  compilador GNU GCC COMPILER*/

int main()
{
    srand(time(NULL));
    int n1,n2;
    int id = 1;
    int cont;
    Tree* pessoa[16]; /* sera 16 pessoas totais*/

    /*pessoa iniciais*/
    for(cont=0; cont<4; cont++)
        pessoa[cont] = cria_arvore_ente(id++);


    /*fazendo filho dos 4 inicias*/
    for(cont=4; cont<8; cont++)
    {
        n1 = rand()%4;
        n2 = rand()%4;
        while(n1==n2)
            n2=rand()%4;

        pessoa[cont] = sexo(pessoa[n1],pessoa[n2], id++);


    }
     /*fazendo filhos junto com o resto que foi criado */
    for(cont=8; cont<16; cont++)
    {
        n1 = rand()%8;
        n2 = rand()%8;
        while(n1==n2)
            n2=rand()%8;
        pessoa[cont] = sexo(pessoa[n1],pessoa[n2], id++);
    }

    for(cont=0; cont<16; cont++) /* imprimindo as pessoas*/
        imprime_pessoa(pessoa[cont]);
    for(cont=0; cont<16; cont++) /* liberando memoria */
        tree_free(pessoa[cont]);


    return 0;
}
