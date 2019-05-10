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

vector<Veiculo> ler_arquivo(int n){

    vector<Veiculo> aux;
    Veiculo veiculo;
    string linha;
    int a=0;

    ifstream arquivo("Veiculos.txt");

    while(getline(arquivo, linha) && a<n){
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
        a++;
    }
    return aux;
}

void ensaio_n_termos(int n){

    vector<Veiculo> veiculos;

    veiculos = ler_arquivo(n);

    clock_t Ticks[2];
    Ticks[0] = clock();

    veiculos = radix(veiculos);

    Ticks[1] = clock();
    auto tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Ensaio com " << veiculos.size() << " elementos na lista" << endl;
    cout << "Tempo de ordenação: " << tempo << "ms" << endl; 
}

void ensaio_lista_definida(vector<Veiculo> veiculos){

    clock_t Ticks[2];
    Ticks[0] = clock();

    veiculos = radix(veiculos);

    Ticks[1] = clock();
    auto tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Ensaio com " << veiculos.size() << " elementos na lista" << endl;
    cout << "Tempo de ordenação: " << tempo << "ms" << endl;

}

int main () {

    vector<Veiculo> veiculos;

    int ordenacao[] = {100000,200000,500000, 1000000, 2000000, 5000000, 10000000, 20000000, 50000000, 0};

    for (int i=0; ordenacao[i] != 0; i++) {
        ensaio_n_termos(ordenacao[i]);
        
        // veiculos = radix(veiculos);
        
        // for(auto p:veiculos){
        //     cout << p.placa << endl;
        // }
    }

    return 0;
}