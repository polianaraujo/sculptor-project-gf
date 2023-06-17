#include <fstream>
#include <cstdlib> //para exit()

int main(void)
{


    // START --- GRAVANDO O NOME EM UM ARQUIVO
    std::ofstream fout;    //fluxo de saída
    fout.open("nome.txt"); //abre o fluxo
    if(!fout.is_open()) exit(1);   //verifica o fluxo
    fout<<"Agostinho Brito \n";
    fout.close();
    // END ----- GRAVANDO O NOME EM UM ARQUIVO


}