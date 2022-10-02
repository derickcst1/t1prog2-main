#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <utility>

using namespace std;

pair<string,vector<string>> Arquivo;
vector<pair<string,vector<string>>> Dicionario;

int names()
{
    cout << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    cout << "TRABALHO T1 FILE MANIPULATOR HACK" << endl;
    cout << "Disciplina: Linguagem de Programacao II" << endl;
    cout << "Alunos:" << "Derick Costa Corneo (20105143)" << endl << "Vinicius Souza Capistrano (18204884)" << endl;
    cout << "-------------------------------" << endl;
}

// MENU
int menu()
{
    int opcao;

    cout << endl;
    cout << "-------------------------------" << endl;
    cout << endl << "FILE MANIPULATOR HACK" << endl;
    cout << "Select an option:" << endl;
    cout << "1. Open a File..." << endl;
    cout << "2. Search for Substrings..." << endl;
    cout << "3. Remove Words Containing a Substring" << endl;
    cout << "4. Remove all Repeated Words" << endl;
    cout << "5. Show Statistics" << endl;
    cout << "6. Exit" << endl;
    cout << endl << "-------------------------------" << endl;
    cout << endl;
    cout << "Option: ";
    cin >> opcao;
    return opcao;
}

// 01 CARREGAR ARQUIVOS
bool LoadDatabase(pair<string,vector<string>> &List)
{
    cout << "Enter with a file to open:";
    string database;
    cin >> database;
    cout << endl;

    List.first = database;

    database = "teste.txt";

    ifstream File;
    File.open(database);
    if (File.is_open() == false)
    {
        cout << "Unable to load file!" << endl;
        return false;
    }
    else
    {
        string str;
        while (getline(File, str))
        {
            List.second.push_back(str);
        }
        cout << "File uploaded!" << endl;
    }
    File.close();
    return true;
}
 
// 02 PESQUISAR SUBSTRING
void FindSubSearchList(const vector<pair<string,vector<string>>> &Dicionario)
{
    cout << "Enter a substring to search: ";
    string str;
    cin >> str;
    cout << endl;

    bool check = false;
    for( size_t i =0;i<Dicionario.size(); i++){
        for( size_t j=0; j<Dicionario.at(i).second.size(); j++){
            if(Dicionario.at(i).second.at(j).find != -1){
                Dicionario.at(i).second.at(j).erase(Dicionario.at(i).second.begin() + j);
            }
        }
    }
    if (check == false)
    {
        cout << "Substring not found";
        cout << endl;
    }
}
/*
// 03 DELETAR SUBSTRING
void FindSubDeletList(pair<string,vector<string>> &List)
{
    cout << "Enter a substring to remove all occurrences:";
    string str;
    cin >> str;
    cout << endl;

    bool check = false;
    size_t i = 0;
    while (i < List.size())
    {
        if (List.at(i).find(str) < List.at(i).size())
        {
            List.erase(List.begin() + i);
            check = true;
            i--;
        }
        i++;
    }
    if (check == false)
    {
        cout << "Substring not found";
        cout << endl;
    }
}

// 04 REMOVER PALAVRAS REPITIDAS
void RemoveWords(pair<string,vector<string>> &List)
{
    bool check = false;
    for (size_t i = 0; i < List.size(); i++)
    {
        for (size_t j = i + 1; j < List.size(); j++)
        {
            cout << "3" << endl;
            if (List.at(i).find(List.at(j)) != -1)
            {
                List.erase(List.begin() + j);
                check = true;
                i--;
            }
        }
    }
    if (check == false)
    {
        cout << "Words not found!" << endl;
    }
    else
    {
        cout << "Double words removed!" << endl;
    }
}

// 05 ESTATISTICAS
bool StatisticsDatabase(const pair<string,vector<string>> &List)
{

    cout << "NOME DO ARQUIVO"
         << " has " << List.size() << " words" << endl;
}

// 06 SALVAR ARQUIVOS
bool SaveDatabase(const pair<string,vector<string>> &List)
{

    cout <<"Enter the name of the file to save:";
    string database;
    cin >> database;
    cout << endl;

    ifstream File;
    File.open(database);

    if (File.is_open() == false)
    {
        cout << "Unable to load file!" << endl;
        return false;
    }
    else
    {
        for (size_t i = 0; i < List.size(); i++)
        {
            File << List.at(i) << endl;
        }
    }
    File.close();
    return true;
}*/

// TESTES IMPRIMIR LISTA
void PrintList(const vector<pair<string,vector<string>>> &Dicionario)
{
    cout << "--------------------------------------------------------------" << endl;
    for (size_t i = 0; i < Dicionario.size(); i++)
    {
        for(size_t j=0; j<Dicionario.at(i).second.size();j++)
        cout << "Indice: " << i << " - Palavra: " << Dicionario.at(i).second.at(j) << " - Qtd de Caracteres: " << Dicionario.at(i).second.at(i).length() << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
    cout << endl;
} 