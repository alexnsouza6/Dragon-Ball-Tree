#include <playAPC/playapc.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>

int main(){
    int img;
    Ponto p;

    AbreJanela(300, 450, "Montagem");
    PintarFundo(0, 0, 0);

    img = AbreImagem("personagem/raca/personagem_mutante.png");

    p.x = -60;
    p.y = -150;
    CriaRetangulo(142,295,p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("personagem/olho_formato/personagem_0005s_0001_olho-redondo.png");
    p.x = -15;
    p.y = 75;
    CriaRetangulo(33,25, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("personagem/olho_cor/personagem_0004s_0000_olho-azul.png");
    p.x = -10;
    p.y = 75;
    CriaRetangulo(21,6, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("personagem/Camisas/camisa.png");

    p.x = -45;
    p.y = 10;
    CriaRetangulo(112,89, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);

/*
    p.x = -90;
    p.y = -40;
    CriaQuadrado(70, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);
*/
    Desenha();

    return 0;
}