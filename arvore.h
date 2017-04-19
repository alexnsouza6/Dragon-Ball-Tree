#ifndef ARVORE_H
#define ARVORE_H

struct genetica
{
    int pai;
    int mae;
    int id;
    char carac[20]; /*  caracteristica a ser colocada; */
    int dom; /* dominancia do gene , 1 == dorminante e 0 == recessivo;*/
};
typedef struct genetica Genetica;

struct tree
{
    Genetica *info;
    struct tree* left;
    struct tree* right;
};
typedef struct tree Tree;

/*cria a arvore*/
Tree* tree_create();
Tree* tree_createleaf(Genetica* criada);
int tree_empty(Tree* mangueira);
Tree* tree_push(Genetica* criada, Tree* mangueira);

/*percorrimentos */
void tree_preorder_walk(Tree* mangueira);
/*-----------*/


Tree* tree_free(Tree* mangueira);



#endif
