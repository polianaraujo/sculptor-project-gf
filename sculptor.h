#include <fstream> 
#include "voxel.h"

/*
O doxygen vai ler as diretivas que vc colocar antes das funções no HEADER (arquivos .h) de cada classe

@brief é o resumo da função 

@details é a explicação da função 

@param é a explicação do parâmetro de uma função
*/

#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief Aqui é definida a classe Sculptor.
 * @details É nela que serão declaradas as funções necessárias das formas que servirão para desenhar a escultura desejada.
*/

class Sculptor {
private:
  Voxel ***v; // Ponteiro triplo para matriz 3D
  int nx, ny, nz; // Dimensões de v
  float r, g, b, a; // Cor do desenho

public:

  /**
    * @brief Função Sculptor é o construtor da classe.
    * @details Ela tem como parâmentros nx linhas, ny colunas e nz planos da matriz.
    * @param _nx linhas
    * @param _ny colunas
    * @param _nz planos
    * @details Com esses parâmetros ela vai definir a dimensão necessária para alocar a matriz desejada.
    */

  Sculptor(int _nx, int _ny, int _nz);
  // Construtor da classe
  
  /**
    * @brief Função ~Sculptor é o destrutor da classe.
    * @details Ela serve para desalocar a matriz.
    */

  ~Sculptor();
  // Destrutor da classe

  /**
    * @brief Função setColor é para definir as cores.
    * @details Define as cores e a opacidade dos voxels que serão formados através das funções que serão chamadas após esta.
    * @param r vermelho
    * @param g verde
    * @param b azul
    * @param a transparência
    */
  
  void setColor(float r, float g, float b, float a);
  /* Define a cor atual do desenho 
  r (vermelho), g (verde), b(azul), a (transparência)
  todos indo de 0 a 1*/
  
  /**
    * @details Insere um voxel de dimensão 1x1x1 na posição x,y,z (fazendo show = true).
    * @param x posição x
    * @param y posição y
    * @param z posição z
    */

  void putVoxel(int x, int y, int z);

  /**
    * @details Serve para remover um voxel de dimensão 1x1x1 na posição x,y,z (fazendo show = false).
    * @param x posição x
    * @param y posição y
    * @param z posição z
    */
  
  void cutVoxel(int x, int y, int z);

  /**
    * @details Serve inserir uma caixa sólida de voxels com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param x0, x1 aresta de tamanho x1-x0
    * @param y0, y1 aresta de tamanho y1-y0
    * @param z0, z1 aresta de tamanho z1-z0
    */
  
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  
  /**
    * @details Serve para cortar uma caixa sólida de voxels com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param x0, x1 aresta de tamanho x1-x0
    * @param y0, y1 aresta de tamanho y1-y0
    * @param z0, z1 aresta de tamanho z1-z0
    */

  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
    * @details Serve inserir uma esfera sólida de voxels levando em conta a equação da esfera com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param xcenter posição x do centro da esfera
    * @param ycenter posição y do centro da esfera
    * @param zcenter posição z do centro da esfera
    */

  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  // Ativa todos os voxel que satisfazem à equação da esfera
  // e atribui aos mesmos a cor atual de desenho (r,g,b,a)

  /**
    * @details Serve remover uma esfera sólida de voxels levando em conta a equação da esfera com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param xcenter posição x do centro da esfera
    * @param ycenter posição y do centro da esfera
    * @param zcenter posição z do centro da esfera
    */

  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  // Desativa todos os voxels que satisfazem à equação da esfera
 
  /**
    * @details Serve inserir uma elipsóide sólida de voxels levando em conta a equação da esfera com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param xcenter posição x do centro da elipsóide
    * @param rx é o raio do elipsóide no eixo x
    * @param ycenter posição y do centro da elipsóide
    * @param ry é o raio do elipsóide no eixo y
    * @param zcenter posição z do centro da elipsóide
    * @param rz é o raio do elipsóide no eixo z
    */

  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  // Ativa todos os voxels que satisfazem à equação do elipsóide
  // e atribui aos mesmos a cor atual de desenho
 
  /**
    * @details Serve remover uma elipsóide sólida de voxels levando em conta a equação da esfera com dimensões x[x0,x1], y[y0,y1] e z[z0,z1].
    * @param xcenter posição x do centro da elipsóide
    * @param rx é o raio do elipsóide no eixo x
    * @param ycenter posição y do centro da elipsóide
    * @param ry é o raio do elipsóide no eixo y
    * @param zcenter posição z do centro da elipsóide
    * @param rz é o raio do elipsóide no eixo z
    */

  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  // Desativa todos os voxels que satisfazem à equação do elipsóide

  /**
    * @details Essa função serve para criar o arquivo em formato OFF com toda a estrutura necessária para ser lido por um sofware online ou programa, para gerar a escultura 3D.
    */

  void writeOFF(const char* filename);
  /* Grava a escultura no formato OFF no arquivo 'filename' */
};

#endif