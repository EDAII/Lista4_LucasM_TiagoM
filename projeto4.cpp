#include <bits/stdc++.h>

using namespace std;

class Veiculo {

    public:
        string placa;
        string montadora;
        string modelo;
        int ano_modelo;
        string estado;
        string proprietario;

        Veiculo(string placa, string montadora, string modelo, int ano_modelo, string stado, string proprietario){
            this->placa = placa;
            this->montadora = montadora;
            this->modelo = modelo;
            this->ano_modelo = ano_modelo;
            this->estado = estado;
            this->proprietario = proprietario;
        }

        Veiculo(string placa){
            this->placa = placa;
        }

        Veiculo(){
            
        }

};

vector<Veiculo> radix(vector<Veiculo> veiculos){

    queue<Veiculo> index [43];

    for(int i=6; i>=0; i--){

        for(auto p:veiculos){
            index[p.placa[i] - '0'].push(p);
        }

        veiculos.clear();

        for(int j=0; j<43; j++){
            while(index[j].size()){
                veiculos.push_back(index[j].front());
                index[j].pop();
            }
        }
    }
    return veiculos;
}

vector<Veiculo> ler_arquivo(){

    vector<Veiculo> aux;
    Veiculo veiculo;
    string linha;

    ifstream arquivo("Veiculos.txt");

    while(getline(arquivo, linha)){
        veiculo.placa = linha;

        getline(arquivo, linha);
        veiculo.montadora = linha;

        getline(arquivo, linha);
        veiculo.modelo = linha;

        getline(arquivo, linha);
        veiculo.ano_modelo = atoi(linha.c_str());

        getline(arquivo, linha);
        veiculo.estado = linha;

        getline(arquivo, linha);
        veiculo.proprietario = linha;

        getline(arquivo, linha);

        aux.push_back(veiculo);
    }

    return aux;

}

int main () {

    vector<Veiculo> veiculos;

    Veiculo aux("ZZZ9999");

    veiculos.push_back(aux);

    aux.placa = "ZZZ9990";

    veiculos.push_back(aux);

    aux.placa = "ZZA9990";

    veiculos.push_back(aux);
    
    aux.placa = "AAA0000";

    veiculos.push_back(aux);
    
    veiculos = radix(veiculos);
    
    for(auto p:veiculos){
        cout << p.placa << endl;
    }

    return 0;
}