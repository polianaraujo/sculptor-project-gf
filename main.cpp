#include <iostream>

#include <cstdlib> //para exit()
#include <sstream>
#include <fstream>
#include <vector>

#include "geomfig.h"
#include "sculptor.h"
#include "putBox.h"
#include "cutBox.h"
#include "putVoxel.h"
#include "cutVoxel.h"
#include "putSphere.h"
#include "cutSphere.h"
#include "putEllipsoid.h"
#include "cutEllipsoid.h"


int main(void)
{
    GeomFig fig;
    PutVoxel vox;
    fig.draw();
    vox.draw();



    /*
    // START --- GRAVANDO O NOME EM UM ARQUIVO
    std::ofstream fout;    //fluxo de saída
    fout.open("nome.txt"); //abre o fluxo
    if(!fout.is_open()) exit(1);   //verifica o fluxo
    fout<<"Agostinho Brito \n";
    fout.close();
    // END ----- GRAVANDO O NOME EM UM ARQUIVO
    */
   return 0;
}