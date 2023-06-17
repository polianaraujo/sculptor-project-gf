#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "geomfig.h"

/**
 * @brief A class PutEllipsoid é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class PutEllipsoid : public GeomFig {
private:
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    /**
     * @details função para colocar um elipsóide.
     * @details Variáveis para o centro em x (xs) (xs = x do elipsóide), centro em y (ys), centro em z (zs), raio de x, raio de y, raio de z, r para o tom de vermelho, g para o tom de verde, b para o tom de azul e a para a transparência alpha. As cores misturadas podem formar outras cores. Cada variável r, g, b e a podem ir de 0.0 a 1.0 ou de 0 a 255.
    */
    PutEllipsoid(int xe, int ye, int ze, int raiox, int raioy, int raioz, float r, float g, float b, float a);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif