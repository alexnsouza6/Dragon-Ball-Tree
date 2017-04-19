Trabalho Feito por Caio Matheus Campos de Oliveira
Matricula 140176713


O trabalho foi feito em um projeto utilizando Code Blocks 13.12 Para windows 8.1
Compilador : GNU GCC Compiler ( e o que vem no codeblocks )

Este projeto foi dividido em 4 partes:
main.c
arvore.c
criador.c
sexo.c
-----------
Arquivo Main.c
Contem apenas a chamada de funcoes de outros arquivos e a criacao da populacao inicial e seus descedentes totalizando 16 pessoas criadas.

--------
Arquivo Arvore.c

Nela esta as funcoes necessárias para o percorrimento da arvore, criancao , insercao se informaçao , estrutura de um ente, e a sua liberação.
A info da arvore conte: ID , Pai, Mae, Caracteristica, e Dominancia do gene.
(Coloquei a dominancia para que nao precisasse comparar letras , apesar que depois pensei que isso seria apenas 2 linhas de codigo )

-------
Arquivo criador.c

Possui a criaçao de mini arvores do ultimo nível, que assim sao juntadas com as arvores superiores, no final, criado uma arvore inteira do ente por juncao de pequenas.
Possui tambem o algoritmo para geraçao aletoria do gene.
------
Arquivo sexo.c
Faz a geracao do filho, criando a arvore para um filho qualquer, que depois tera sua arvore percorrida juntamente com os seus pais, para que mude os valores de acordo com a dominancia de cada um.
Possui tambem as funcoes para verificacao de que nivel esta a arvore ( apesar que poderia ter feito uma unica funcao para checar que nivel esta ), e tambem se encontra neste arquivo a funcao para impressao de apenas os dados dominantes de cada pessoa.

----

Creditos: 
Professor Jose Ralha  - Slides de Arvore e Aulas
Leandro Faria, Rafael Martins, e Arthur Novaes - Ajudando a tirar duvidas e discussao do trabalho.
Caio Matheus Campos de Oliveira - Esse ai escreveu o codigo todo ;D