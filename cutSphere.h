#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "geomfig.h"

/**
 * @brief A class CutSphere é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class CutSphere : public GeomFig 
{
private:
    int xcenter, ycenter, zcenter, radius;
public:
    /**
     * @details função para recortar no formato de uma esfera.
     * @details Variáveis para o centro em x (xs) (xs = x da esfera), centro em y (ys), centro em z (zs), raio.
    */
    CutSphere(int xs, int ys, int zs, int raio);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif