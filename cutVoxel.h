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
     * @details Variáveis para a profundidade xv (coordenada x) (xv = x do voxel), altura yv (coordenada y), largura zv (coordenada z), r para o tom de vermelho, g para o tom de verde, b para o tom de azul e a para a transparência alpha. As cores misturadas podem formar outras cores. Cada variável r, g, b e a podem ir de 0.0 a 1.0 ou de 0 a 255.
    */
    CutVoxel(int xv, int yv, int zv, float r, float g, float b, float a);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H