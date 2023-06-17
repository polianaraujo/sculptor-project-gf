#ifndef VOXEL_H
#define VOXEL_H

/**
 * @brief A struct Voxel é uma estrutura para a classe Sculptor, que esta será chamada caso não tenha sido definida em outro arquivo.
 * @details Nela estão as variáveis das cores, tranparência e uma booleana.
 * */

struct Voxel {
    
    /**
     * @details Variáveis para as cores r (vermelho), g (verde) e b (azul), que misturadas podem formar outras cores. Cada variável pode ir de 0.0 a 1.0 ou de 0 a 255.
    */
    float r,g,b;
    
    /**
     * @details A variável de transparência pode ir de 0 (totalmente sem cor) até 1 (totalmente opaca) ou de 0 a 255.
    */
    float a;

    /**
     * @details A booleana show vai definir se o voxel[][][] vai ser mostrado (true) ou não (false).
    */
    bool show;
};

#endif // VOXEL_H