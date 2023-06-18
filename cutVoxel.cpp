#include "cutVoxel.h"

CutVoxel::CutVoxel(int xv, int yv, int zv)
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
    s.putVoxel(x, y, z);
}