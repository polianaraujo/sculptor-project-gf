#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "geomfig.h"

/**
 * @brief A class CutEllipsoid é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class CutEllipsoid : public GeomFig {
private:
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    /**
     * @details função para cortar em no formato de um elipsóide.
     * @details Variáveis para o centro em x (xs) (xs = x do elipsóide), centro em y (ys), centro em z (zs), raio de x, raio de y, raio de z.
    */
    CutEllipsoid(int xe, int ye, int ze, int raiox, int raioy, int raioz);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif