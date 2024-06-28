#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, x;

    cout << "Quantas pessoas quer cadastrar? ";
    cin >> x;
    fflush(stdin);

    struct EstruturaPessoa {
        char nome[60], naturalidade[30], sexo[15];
        int idade;
        float peso, altura;
    } strPessoa[x];

    cout << endl;

    
    for (i = 0; i < x; i++) {
        cout << "Informe o nome completo: ";
        fflush(stdin);
        cin.getline(strPessoa[i].nome, 60);
        cout << "Informe a naturalidade: ";
        cin.getline(strPessoa[i].naturalidade, 30);
        cout << "Informe o sexo: ";
        cin >> strPessoa[i].sexo;
        cout << "Informe a idade: ";
        cin >> strPessoa[i].idade;
        cout << "Informe o peso: ";
        cin >> strPessoa[i].peso;
        cout << "Informe a altura: ";
        cin >> strPessoa[i].altura;
        cout << endl;
    }

    cout << endl;
    cout << "Pessoas cadastradas com sucesso!" << endl << endl;

    for (i = 0; i < x; i++) {
        cout << "Nome completo: " << strPessoa[i].nome << endl;
        cout << "Idade: " << strPessoa[i].idade << endl;
        cout << "Naturalidade: " << strPessoa[i].naturalidade << endl;
        cout << "Sexo: " << strPessoa[i].sexo << endl;
        cout << "Altura: " << strPessoa[i].idade << endl;
        cout << "Peso: " << strPessoa[i].peso << endl;
        cout << endl;
    }
}

