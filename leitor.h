#ifndef LEITOR_H
#define LEITOR_H
#include <string>
#include <vector>
#include "geomfig.h"

class Leitor
{
protected:
    int nx, ny, nz;
    float r, g, b, a;
public:
    Leitor();
    std::vector<GeomFig*> parse(std::string filename);
    int Dimx();
    int Dimy();
    int Dimz();
};


#endif // LEITOR_H