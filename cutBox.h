#ifndef CUTBOX_H
#define CUTBOX_H
#include "geomfig.h"

/**
 * @brief A class CutVoxel é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class CutBox : public GeomFig {
private:
    int x0, x1, y0, y1, z0, z1;
public:
    /**
     * @details função para recortar no formato de uma caixa.
     * @details Variáveis para a profundidade xv (coordenada x) (xv = x do voxel), altura yv (coordenada y), largura zv (coordenada z).
    */
    CutBox(int x0b, int x1b, int y0b, int y1b, int z0b, int z1b);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif