#include <playAPC/playapc.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>

int main(){
    int img;
    Ponto p;

    AbreJanela(400, 500, "Montagem");
    PintarFundo(0, 0, 0);

    img = AbreImagem("./personagem_0006s_0001_humano.png");

    p.x = -75;
    p.y = -90;
    CriaRetangulo(150,180, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("./personagem_0005s_0001_olho-redondo.png");
    p.x = -12;
    p.y = 70;
    CriaRetangulo(20, 16, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("./personagem_0004s_0000_olho-azul.png");
    p.x = -8;
    p.y = 73;
    CriaRetangulo(13, 6, p);
    Pintar(255, 255, 255);
    AssociaImagem(img);


    img = AbreImagem("./personagem_0000s_0000_camisa.png");

    p.x = -50;
    p.y = -10;
    CriaTriangulo(50, 50, p);
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