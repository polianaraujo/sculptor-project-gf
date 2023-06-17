#include "cutBox.h"

CutBox::CutBox(int x0b, int x1b, int y0b, int y1b, int z0b, int z1b, float r, float g, float b, float a)
{
    this->x0=x0b;
    this->x1=x1b;
    this->y0=y0b;
    this->y1=y1b;
    this->z0=z0b;
    this->z1=z1b;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}

void CutBox::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);
    s.cutBox(x0, x1, y0, y1, z0, z1);
}