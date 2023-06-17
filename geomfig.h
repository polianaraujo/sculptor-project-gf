#ifndef GEOMFIG_H
#define GEOMFIG_H
#include "sculptor.h"

class GeomFig
{

protected:
    float r, g, b, a;
public:
    virtual ~GeomFig();
    virtual void draw(Sculptor &s)=0;

};

#endif