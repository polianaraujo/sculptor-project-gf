#include <iostream>
#include <vector>
#include "leitor.h"


int main()
{
    Sculptor *document;
    Leitor leitor;
    std::vector<GeomFig*> fig;

    fig = leitor.parse("figtest.txt");

    document = new Sculptor(leitor.Dimx(), leitor.Dimy(), leitor.Dimz());
    
    for(size_t i=0; i<fig.size(); i++) fig[i]->draw(*document);

    document->writeOFF("TESTE.off");

    // liberando memoria
    for(size_t i=0; i<fig.size(); i++) delete fig[i];

    delete document;
    
    return 0;
}