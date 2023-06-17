#include "cutVoxel.h"

CutVoxel::CutVoxel(int xv, int yv, int zv, float r, float g, float b, float a)
{
    this->x=xv;
    this->y=yv;
    this->z=zv;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}

void CutVoxel::draw(Sculptor &s)
{
    s.setColor(r, g, b, a);
    s.putVoxel(x, y, z);
}