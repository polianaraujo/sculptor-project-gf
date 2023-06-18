#ifndef GEOMFIG_H
#define GEOMFIG_H
#include "sculptor.h"
#include <iostream>
#include <fstream>

class GeomFig
{

protected:
    float r, g, b, a;
public:
    GeomFig(){};
    virtual ~GeomFig(){};
    virtual void draw(Sculptor &s)=0; //metodo virtual puro (=0)

};

#endif // GEOMFIG_H