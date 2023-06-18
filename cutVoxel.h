#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "geomfig.h"

/**
 * @brief A class CutVoxel é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class CutVoxel : public GeomFig {
private:
    int x, y, z;
public:
    /**
     * @details função para cortar no formato de um voxel.
     * @details Variáveis para a profundidade xv (coordenada x) (xv = x do voxel), altura yv (coordenada y), largura zv (coordenada z).
    */
    CutVoxel(int xv, int yv, int zv);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H