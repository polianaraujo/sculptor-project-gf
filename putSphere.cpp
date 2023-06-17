#include "putSphere.h"

PutSphere::PutSphere(int xs, int ys, int zs, int raio, int r, int g, int b, int a)
{
    this -> xcenter=xs;
    this -> ycenter=ys;
    this -> zcenter=zs;
    this -> radius=raio;
    this -> r=r;
    this -> g=g;
    this -> b=b;
    this -> a=a;
}

void PutSphere::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);
    s.putSphere(xcenter, ycenter, zcenter, radius);
}