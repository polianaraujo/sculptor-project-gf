#include "cutSphere.h"

CutSphere::CutSphere(int xs, int ys, int zs, int raio)
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

void CutSphere::draw(Sculptor &s)
{
    s.cutSphere(xcenter, ycenter, zcenter, radius);
}