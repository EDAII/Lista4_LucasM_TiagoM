#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<string> placa;
    vector<string> montadora;
    vector<string> modelo;
    vector<string> ano_modelo;
    vector<string> estado;
    vector<string> proprietario;

    pair<string,string> aux;
    string linha;
    string buffer{""};

    ifstream arquivo1("./Lista_informacoes/placas.txt");

    while(getline(arquivo1 ,linha)){
        placa.push_back(linha);
    }

    arquivo1.close();
    ifstream arquivo2("./Lista_informacoes/montadoras.txt");

     while(getline(arquivo2 ,linha)){
        montadora.push_back(linha);
    }

    arquivo2.close();
    ifstream arquivo3("./Lista_informacoes/ano_modelo.txt");

     while(getline(arquivo3 ,linha)){
        ano_modelo.push_back(linha);
    }

    arquivo3.close();
    ifstream arquivo4("./Lista_informacoes/estados.txt");

     while(getline(arquivo4 ,linha)){
        estado.push_back(linha);
    }

    arquivo4.close();
    ifstream arquivo5("./Lista_informacoes/nomes_aleat.txt");

    while(getline(arquivo5 ,linha)){
        proprietario.push_back(linha);
    }

    arquivo5.close();
    ifstream arquivo6("./Lista_informacoes/modelos.txt");

     while(getline(arquivo6 ,linha)){
        modelo.push_back(linha);
    }
    arquivo6.close();


    for (int i=0; i < 10; i++) {
        srand(clock());

        int pos;

        pos = rand() % placa.size();
        cout << placa[pos] << endl;
        
        pos = rand() % montadora.size();
        cout << montadora[pos] << endl;

        pos = rand() % modelo.size();
        cout << modelo[pos] << endl;

        pos = rand() % ano_modelo.size();
        cout << ano_modelo[pos] << endl;

        pos = rand() % estado.size();
        cout << estado[pos] << endl;

        pos = rand() % proprietario.size();
        cout << proprietario[pos] << endl;

        cout << "$" << endl;
    }

    return 0;
}