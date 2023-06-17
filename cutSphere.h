#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "geomfig.h"

/**
 * @brief A class CutSphere é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class CutSphere : public GeomFig {
private:
    int xcenter, ycenter, zcenter, radius;
public:
    /**
     * @details função para recortar no formato de uma esfera.
     * @details Variáveis para o centro em x (xs) (xs = x da esfera), centro em y (ys), centro em z (zs), raio, r para o tom de vermelho, g para o tom de verde, b para o tom de azul e a para a transparência alpha. As cores misturadas podem formar outras cores. Cada variável r, g, b e a podem ir de 0.0 a 1.0 ou de 0 a 255.
    */
    CutSphere(int xs, int ys, int zs, int raio, float r, float g, float b, float a);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif