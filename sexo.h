#ifndef SEXO_H
#define SEXO_H

#include"arvore.h"
Tree* cria_arvore_filho(Tree* pai, Tree* mae);

Tree* sexo(Tree* pai,Tree* mae, int id);

void atribui_genetica(Genetica* recebe, Genetica* alvo);
void atribui_duplo_dominante(Tree* pai, Tree* mae, Tree* filho, Tree* mutante);

void gerando_filho(Tree* pai, Tree* mae, Tree* filho, Tree* mutante); /* anda pelas arvores juntas */

int verifica_ultimo_nivel(Tree* mangueira);
int verifica_penultimo_nivel(Tree* mangueira);
int verifica_antpenultimo_nivel(Tree* mangueira);
Genetica* dominante(Tree* folha);

void imprime_pessoa(Tree *mangueira);
#endif
