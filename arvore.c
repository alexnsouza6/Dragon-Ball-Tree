#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"criador.h"
#include"sexo.h"
#include"arvore.h"

/*cria a arvore*/
Tree* tree_create()
{
    return NULL;
}


/*cria a folha */
Tree* tree_createleaf(Genetica* criada)
{
    Tree* mangueira = (Tree*)malloc(sizeof(Tree));
    mangueira->info = criada;
    mangueira->left = NULL;
    mangueira->right = NULL;

    return mangueira;
}

int tree_empty(Tree* mangueira)
{
    if(mangueira == NULL)
        return 1; /*retorna 1 se for vazia */
    return 0;
}
/*insere na arvore*/
Tree* tree_push(Genetica* criada, Tree* mangueira)
{
    if(tree_empty(mangueira)) /* cria folha se estiver vazia*/
        mangueira = tree_createleaf(criada);

    else
    {
          if(mangueira->left == NULL)
            mangueira->left = tree_push(criada, mangueira->left);
          else
            mangueira->right = tree_push(criada, mangueira->right);
    }
    return mangueira;
}
/*faz o percorrimento em ordem */
/*vai servir para imprimir a caracteristica*/
/*funcao criada para que pudesse verificar se a arvore foi criada corretamente */
void tree_preorder_walk(Tree* mangueira)
{
     if(tree_empty(mangueira) == 0)
    {
        /* arrumando pra imprimir tudo bonito */
        if(strcmp(mangueira->info->carac,"ente")==0)
          printf("\n-Identificao: %d--Pai: %d--Mae: %d-----\n", mangueira->info->id,mangueira->info->pai,mangueira->info->mae);
        if(verifica_antpenultimo_nivel(mangueira))
            printf("\n");
        if(verifica_penultimo_nivel(mangueira))
            printf("\n\n");
        if(verifica_ultimo_nivel(mangueira))
            printf("\n");
        printf("%s, ", mangueira->info->carac); /* imprimindo aki */
        if(verifica_antpenultimo_nivel(mangueira))
            printf("\n\n");
        if(verifica_penultimo_nivel(mangueira))
            printf("\n");
        if(verifica_ultimo_nivel(mangueira))
            printf(":");
        tree_preorder_walk(mangueira->left);
        tree_preorder_walk(mangueira->right);
    }
}



/*libera memoria da arovre*/
Tree* tree_free(Tree* mangueira)
{
    if(tree_empty(mangueira)==0)
    {
        tree_free(mangueira->left);
        tree_free(mangueira->right);
        free(mangueira);
    }
    return NULL;
}






