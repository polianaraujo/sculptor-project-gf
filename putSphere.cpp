#include "putSphere.h"
#include <iostream>

PutSphere::PutSphere(int xs, int ys, int zs, int raio, float r, float g, float b, float a)
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