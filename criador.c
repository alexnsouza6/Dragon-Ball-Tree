#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"arvore.h"
#include"criador.h"
#include"sexo.h"

/*impri a info da folha */
void imprime_genetica(Genetica* g){
  printf("Carac: %s\n", g->carac);
  printf("Dominancia: %d\n\n", g->dom);

}
/* mostra apenas o gene*/
void imprime_dominante(Genetica* g){
  printf("%s\n", g->carac);
}
/* cria uma raiz/folha inicial para arvore */
Genetica* cria_folha(char* conteudo, int dominancia){
    Genetica* folha = (Genetica*)malloc(sizeof(Genetica));
    strcpy(folha->carac,conteudo);
    folha->dom = dominancia;
    return folha;
}
/*cria cabeça*/
Tree* cria_arvore_ente(int id){
    Tree* ente = tree_create();
    ente = tree_push(cria_folha("ente", 0),ente);
    ente->info->pai = 0; ente->info->mae = 0; ente->info->id = id; /*inicial criado sempre 0 com pai e mae*/
    ente->left = cria_arvore_cabeca();
    ente->right = cria_arvore_corpo();
    return ente;
}


/* ja sabe o que faz */
Tree* cria_arvore_cabeca(){
    Tree* cabeca = tree_create();
    cabeca = tree_push(cria_folha("cabeca", -3),cabeca);
    cabeca->left = cria_arvore_olhos();
    cabeca->right = cria_arvore_cabelos();
    return cabeca;
}
/*os nomes estao bem descritivos*/
Tree* cria_arvore_corpo(){
    Tree* corpo = tree_create();
    corpo = tree_push(cria_folha("corpo", -3),corpo);
    corpo->left = cria_arvore_membros();
    corpo->right = cria_arvore_tronco();
    return corpo;
}

/*///////////////////////////////////////////////////////////////////*/

/*criando olhos*/
Tree* cria_arvore_olhos(){
    Tree* olho = tree_create();
    olho = tree_push(cria_folha("olhos", -3),olho);
    olho->left = cria_arvore_cor_olhos();
    olho->right = cria_arvore_tipo_olhos();
    return olho;
}
Tree* cria_arvore_cor_olhos(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("cor", -2), mangueira);
  mangueira = tree_push(cria_cor_olhos(), mangueira);
  mangueira = tree_push(cria_cor_olhos(), mangueira);
  return mangueira;
}

Tree* cria_arvore_tipo_olhos(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("formato", -2), mangueira);
  mangueira = tree_push(cria_tipo_olhos(), mangueira);
  mangueira = tree_push(cria_tipo_olhos(), mangueira);
  return mangueira;
}
/*///////////////////////////////////////////////////////////////////*/
/*criando cabelos*/
Tree* cria_arvore_cabelos(){
    Tree* cabelos = tree_create();
    cabelos = tree_push(cria_folha("cabelos", -3),cabelos);
    cabelos->left = cria_arvore_cor_cabelos();
    cabelos->right = cria_arvore_tipo_cabelos();
    return cabelos;
}
Tree* cria_arvore_cor_cabelos(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("cor", -2), mangueira);
  mangueira = tree_push(cria_cor_cabelos(), mangueira);
  mangueira = tree_push(cria_cor_cabelos(), mangueira);
  return mangueira;
}
Tree* cria_arvore_tipo_cabelos(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("tipo", -2), mangueira);
  mangueira = tree_push(cria_tipo_cabelos(), mangueira);
  mangueira = tree_push(cria_tipo_cabelos(), mangueira);
  return mangueira;
}
/*///////////////////////////////////////////////////////////////////*/
/*criando membros*/
Tree* cria_arvore_membros(){
    Tree* membros = tree_create();
    membros = tree_push(cria_folha("membros", -3),membros);
    membros->left = cria_arvore_bracos_membros();
    membros->right = cria_arvore_pernas_membros();
    return membros;
}
Tree* cria_arvore_bracos_membros(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("calcas", -2), mangueira);
  mangueira = tree_push(cria_bracos_membros(), mangueira);
  mangueira = tree_push(cria_bracos_membros(), mangueira);
  return mangueira;
}
Tree* cria_arvore_pernas_membros(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("botas", -2), mangueira);
  mangueira = tree_push(cria_pernas_membros(), mangueira);
  mangueira = tree_push(cria_pernas_membros(), mangueira);
  return mangueira;
}
/*///////////////////////////////////////////////////////////////////*/
/*criando tronco*/
Tree* cria_arvore_tronco(){
    Tree* tronco = tree_create();
    tronco = tree_push(cria_folha("tronco", -3),tronco);
    tronco->left = cria_arvore_pescoco_tronco();
    tronco->right = cria_arvore_pelos_tronco();
    return tronco;
}
Tree* cria_arvore_pescoco_tronco(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("raca", -2), mangueira);
  mangueira = tree_push(cria_pescoco_tronco(), mangueira);
  mangueira = tree_push(cria_pescoco_tronco(), mangueira);
  return mangueira;
}
Tree* cria_arvore_pelos_tronco(){
  Tree* mangueira = tree_create();
  mangueira = tree_push(cria_folha("camisa", -2), mangueira);
  mangueira = tree_push(cria_pelos_tronco(), mangueira);
  mangueira = tree_push(cria_pelos_tronco(), mangueira);
  return mangueira;
}


/*///////////////////////////////////////////////////////////////////*/
/*Criacao dos adjetivos da ultima linha*/


Genetica* cria_cor_olhos(){
    srand(rand()%9999*time(NULL));
    Genetica* corolhos = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%4;
    /* nao gosto de switch */
    if(r==3)
       strcpy(corolhos->carac,"azul");
    if(r==2)
       strcpy(corolhos->carac,"castanho");
    if(r==1)
       strcpy(corolhos->carac,"preto");
    if(r==0)
       strcpy(corolhos->carac,"verde");
    corolhos->dom = r;
    return corolhos;
}

Genetica* cria_tipo_olhos(){
    srand(rand()%9999*time(NULL));
    Genetica* tipoolhos = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%2;
    if(r==1)
       strcpy(tipoolhos->carac,"circular");
    if(r==0)
       strcpy(tipoolhos->carac,"triangular");
    tipoolhos->dom = r;
    return tipoolhos;
}

Genetica* cria_tipo_cabelos(){
    srand(rand()%9999*time(NULL));
    Genetica* tipocabelos = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%4;
    if(r==3)
       strcpy(tipocabelos->carac,"careca");
    if(r==2)
       strcpy(tipocabelos->carac,"goku");
    if(r==1)
       strcpy(tipocabelos->carac,"trunks");
    if(r==0)
       strcpy(tipocabelos->carac,"vegeta");
    tipocabelos->dom = r;
    return tipocabelos;
}
Genetica* cria_cor_cabelos(){
    srand(rand()%9999*time(NULL));
    Genetica* corcabelos = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%4;
    if(r==3)
       strcpy(corcabelos->carac,"preto");
    if(r==2)
       strcpy(corcabelos->carac,"amarelo");
    if(r==1)
       strcpy(corcabelos->carac,"azul");
    if(r==0)
       strcpy(corcabelos->carac,"vermelho");
    corcabelos->dom = r;
    return corcabelos;
}
Genetica* cria_pernas_membros(){
    srand(rand()%9999*time(NULL));
    Genetica* pernamembros = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%3;
    if(r==2)
       strcpy(pernamembros->carac,"azul");
    if(r==1)
       strcpy(pernamembros->carac,"marrom");
    if(r==0)
       strcpy(pernamembros->carac,"preta");
    pernamembros->dom = r;
    return pernamembros;
}
Genetica* cria_bracos_membros(){
    srand(rand()%9999*time(NULL));
    Genetica* bracomembros = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%3;
    if(r==2)
       strcpy(bracomembros->carac,"azul");
    if(r==1)
       strcpy(bracomembros->carac,"laranja");
    if(r==0)
       strcpy(bracomembros->carac,"preta");
    bracomembros->dom = r;
    return bracomembros;
}
Genetica* cria_pescoco_tronco(){
    srand(rand()%9999*time(NULL));
    Genetica* pescoco = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%3;
    if(r==2)
       strcpy(pescoco->carac,"humano");
    if(r==1)
       strcpy(pescoco->carac,"namekusei");
    if(r==0)
       strcpy(pescoco->carac,"sayajin");
    pescoco->dom = r;
    return pescoco;
}
Genetica* cria_pelos_tronco(){
    srand(rand()%9999*time(NULL));
    Genetica* pelos = (Genetica*)malloc(sizeof(Genetica));
    int r = rand()%3;

    if(r==2)
       strcpy(pelos->carac,"armadura");
    if(r==1)
       strcpy(pelos->carac,"luta");
    if(r==0)
       strcpy(pelos->carac,"semcamisa");
    pelos->dom = r;
    return pelos;
}





