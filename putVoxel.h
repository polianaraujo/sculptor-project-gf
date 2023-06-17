#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "geomfig.h"

/**
 * @brief A class PutVoxel é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class PutVoxel : public GeomFig {
public:
    /**
     * @details função para colocar voxe.
     * @details Variáveis para a profundidade xv (coordenada x) (xv = x do voxel), altura yv (coordenada y), largura zv (coordenada z), rv para o tom de vermelho, gv para o tom de verde, bv para o tom de azul e av para a transparência alpha. As cores misturadas podem formar outras cores. Cada variável rv, gv, bv e av podem ir de 0.0 a 1.0 ou de 0 a 255.
    */
    PutVoxel(int xv, int yv, int zv, float rv, float gv, float bv, float av);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H