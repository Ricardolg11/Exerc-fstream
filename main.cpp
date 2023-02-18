#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    //ofstream(saida) ifstream(entrada) fstream(entrada e saida)

    ofstream arquivoSaida;// para grava no arquivo

    arquivoSaida.open("cf.txt"); // abertura/criação do arquivo

    arquivoSaida << "escrevendo\n";
    arquivoSaida << "escrevendo2\n";
    arquivoSaida << "escrevendo3\n"; // escrevendo no arquivo
    arquivoSaida.close();

    ifstream arquivoEntrada; // para ler o aquivo

    string linha;
    arquivoEntrada.open("cf.txt"); //abrindo o aquivo

    if(arquivoEntrada.is_open()){ // verificando se o arquivo esta aberto
        while(getline(arquivoEntrada, linha)){ // fazendo a leitura das linhas do arquivo
            cout << linha << endl;
        }
        arquivoEntrada.close();

    } else {
        cout << "Nao foi possivel abri o aquivo";
    }

    return 0;
}
