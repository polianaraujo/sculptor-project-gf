#ifndef PUTBOX_H
#define PUTBOX_H
#include "geomfig.h"

/**
 * @brief A class PutVoxel é uma classe de FiguraGeometrica.
 * @details ou seja, é herdeira de FiguraGeometrica.
 * */

class PutBox : public GeomFig {
private:
    int x0, x1, y0, y1, z0, z1;
public:
    /**
     * @details função para colocar uma caixa.
     * @details Variáveis para a profundidade xv (coordenada x) (xv = x do voxel), altura yv (coordenada y), largura zv (coordenada z), r para o tom de vermelho, g para o tom de verde, b para o tom de azul e a para a transparência alpha. As cores misturadas podem formar outras cores. Cada variável r, g, b e a podem ir de 0.0 a 1.0 ou de 0 a 255.
    */
    PutBox(int x0b, int x1b, int y0b, int y1b, int z0b, int z1b, float r, float g, float b, float a);

    /**
     * @details .
    */
    void draw(Sculptor &s);
};

#endif