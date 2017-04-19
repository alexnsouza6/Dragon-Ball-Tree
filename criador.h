#ifndef CRIADO_H
#define CRIADOR_H


#include<time.h>
#include"arvore.h"


Genetica* cria_cor_olhos();
void imprime_genetica(Genetica* g);

/*criacao das ultimas folhas*/
Genetica* cria_pernas_membros();
Genetica* cria_bracos_membros();

Genetica* cria_pescoco_tronco();
Genetica* cria_pelos_tronco();

Genetica* cria_tipo_cabelos();
Genetica* cria_cor_cabelos();

Genetica* cria_tipo_olhos();
Genetica* cria_cor_olhos();

Genetica* cria_folha(char* conteudo, int dominancia);

void imprime_dominante(Genetica* g);


/*criacao das subclasses*/
Tree* cria_arvore_cor_olhos();
Tree* cria_arvore_tipo_olhos();
Tree* cria_arvore_olhos();
///////////
Tree* cria_arvore_pernas_membros();
Tree* cria_arvore_bracos_membros();
Tree* cria_arvore_membros();
////
Tree* cria_arvore_pescoco_tronco();
Tree* cria_arvore_pelos_tronco();
Tree* cria_arvore_tronco();
/////////
Tree* cria_arvore_cor_cabelos();
Tree* cria_arvore_tipo_cabelos();
Tree* cria_arvore_cabelos();


Tree* cria_arvore_cabeca();
Tree* cria_arvore_corpo();

Tree* cria_arvore_ente(int id);

#endif
