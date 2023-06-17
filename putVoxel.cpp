#include "putVoxel.h"

PutVoxel::PutVoxel(int xv, int yv, int zv, float rv, float gv, float bv, float av){
    this->xv=xv;
    this->yv=yv;
    this->zv=zv;
    this->rv=rv;
    this->gv=gv;
    this->bv=bv;
    this->av=av;
}

void PutVoxel::draw(Sculptor &s){
    s.setColor(rv, gv, bv, av);
    s.putVoxel(xv, yv, zv);
}