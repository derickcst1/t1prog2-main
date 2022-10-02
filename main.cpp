#include "funcoes.hpp"


int main()
{
    names();
    for (;;)
    {

        int opcao = menu();

        switch (opcao)
        {

        case 1:
            LoadDatabase(Arquivo);
            Dicionario.push_back(Arquivo);
            break;

        case 2:
          //  FindSubSearchList(Arquivo);
            break;

        case 3:
            //FindSubDeletList(Arquivo);
            break;

        case 4:
            //RemoveWords(Arquivo);
            break;

        case 5:
            //StatisticsDatabase(Arquivo);
            break;

        case 6:
            cout << "Programa Finalizado" << endl;
            return 0;
            break;

        case 7: 
            PrintList(Dicionario);
            break;

        default:
            cout << endl << "Invalid option!" << endl;
            break;
        }
    }

    return 0;
}