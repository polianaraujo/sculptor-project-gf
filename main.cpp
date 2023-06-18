#include <iostream>

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
    int nx, ny, nz; //dimensão total
    /*
    int x, y, z; // voxel 
    int x0, x1, y0, y1, z0, z1; // box
    int xcenter, ycenter, zcenter; // sphere e ellipsoid
    float radius; // raio sphere
    float rx, ry, rz; // raios ellipsoid
    float r, g, b, a;
    */

    int x0, y0, z0;
    int x1, y1, z1;
    float r, g, b, a;
    float raio, raiox, raioy, raioz;

    GeomFig *pfig;

    std::ifstream fin;
    std::ofstream fout;

    //vetor
    std::vector<GeomFig*>::iterator i;
    std::vector<GeomFig*> fig;
    std::stringstream ss;
    std::string s;
    Sculptor *document;
    
    //Abrindo o fluxo
    fin.open(figtest.txt);
    

    //Verificação do diretório
    if(!fin.is_open())
    {
        std::cout << "Arquivo não foi aberto" << std::endl;
        exit(1);
    }
    //fin >> s;
    //if(s.compare("dim")==0) fin >> nx >> ny >> nz;
    
    
    while(fin.good())
    {
        fin >> s;
        
        if(!fin.good()) break;
        if(fin.good())
        {
            // dimensão do documento da desenho
            if( s.compare ("dim") == 0)
            {
                fin >> nx >> ny >> nz;
                document = new Sculptor(nx,ny,nz);
            }

            // putVoxel
            else if ( s.compare ("putVoxel") == 0 )
            {
                fin >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                fig.push_back( new PutVoxel(x0, y0, z0, r, g, b, a) );
            }

            // putBox
            else if ( s.compare ("putBox") == 0 )
            {
                fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                fig.push_back( new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a) );
            }

            // putSphere
            else if ( s.compare ("putSphere") == 0 )
            {
                fin >> x0 >> y0 >> z0 >> raio >> r >> g >> b >> a;
                fig.push_back( new PutSphere(x0, y0, z0, raio, r, g, b, a) );
            }

            // putEllipsoid
            else if ( s.compare ("putEllipsoid") == 0 )
            {
                fin >> x0 >> y0 >> z0 >> raiox >> raioy >> raioz >> r >> g >> b >> a;
                fig.push_back( new PutEllipsoid(x0, y0, z0, raiox, raioy, raioz, r, g, b, a) );
            }

            // cutVoxel
            else if ( s.compare ("cutVoxel") == 0 )
            {
                fin >> x0 >> y0 >> z0;
                fig.push_back( new CutVoxel(x0, y0, z0) );
            }

            // cutBox
            else if ( s.compare ("cutBox") == 0 )
            {
                fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                fig.push_back( new CutBox(x0, x1, y0, y1, z0, z1) );
            }

            // cutSphere
            else if ( s.compare ("cutSphere") == 0 )
            {
                fin >> x0 >> y0 >> z0 >> raio;
                fig.push_back( new CutSphere(x0, y0, z0, raio) );
            }

            // cutEllipsoid
            else if ( s.compare ("cutellipsoid") == 0 )
            {
                fin >>  x0 >> y0 >> z0 >> raiox >> raioy >> raioz;
                fig.push_back( new CutEllipsoid(x0, y0, z0, raiox, raioy, raioz) );
            }
        }

        // Fechando o fluxo
        fin.close();

        // Desenho
        for(auto i : fig) i->draw(*document);

        document->writeOFF("TESTE.off");

        // liberando memoria
        for(i=fig.begin(); i !=fig.end(); i++) delete[] *i;

    }
    
    return 0;
}