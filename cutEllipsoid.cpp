#include "cutEllipsoid.h"

CutEllipsoid::CutEllipsoid(int xe, int ye, int ze, int raiox, int raioy, int raioz, float r, float g, float b, float a)
{
    this -> xcenter=xe;
    this -> ycenter=ye;
    this -> zcenter=ze;
    this -> rx=raiox;
    this -> ry=raioy;
    this -> rz=raioz;
    this -> r=r;
    this -> g=g;
    this -> b=b;
    this -> a=a;
}

void CutEllipsoid::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);
    s.cutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz);
}