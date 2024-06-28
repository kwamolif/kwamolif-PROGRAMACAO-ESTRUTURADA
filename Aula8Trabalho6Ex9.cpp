#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

/*
Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal, espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono). 
O programa deve solicitar os dados de N PETs. 
Mostre na tela todos os cadastros.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int x, i = 0;

    cout << "Quantos animais vai cadastrar? ";
    cin >> x;
    cin.ignore();

    cout << endl;

    struct DadosPet {
        char nome[50], especie[30], raca[20], sexo[10], nomedono[50];
        int idade, rgdono, telefonedono;
    } strPet[x];

    for (i = 0; i < x; i++) {
        cout << "INFORME O NOME DO PET: ";
        cin.getline(strPet[i].nome, 50);
        cout << "INFORME A ESPÉCIE DO PET: ";
        cin.getline(strPet[i].especie, 30);
        cout << "INFORME A RAÇA DO PET: ";
        cin.getline(strPet[i].raca, 20);
        cout << "INFORME O SEXO DO PET: ";
        cin.getline(strPet[i].sexo, 10);
        cout << "INFORME A IDADE DO PET: ";
        cin >> strPet[i].idade;
        cin.ignore();
        cout << "INFORME O NOME DO DONO DO PET: ";
        cin.getline(strPet[i].nomedono, 50);
        cout << "INFORME O RG DO DONO DO PET: ";
        cin >> strPet[i].rgdono;
        cin.ignore();
        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        cin >> strPet[i].telefonedono;
        cin.ignore();
        cout << endl;
    }

    cout << endl;
    cout << "Pets cadastros com sucesso!" << endl << endl;

    for (i = 0; i < x; i++) {
        cout << "NOME DO PET: " << strPet[i].nome << endl;
        cout << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
        cout << "RAÇA DO PET: " << strPet[i].raca << endl;
        cout << "SEXO DO PET: " << strPet[i].sexo << endl;
        cout << "IDADE DO PET: " << strPet[i].idade << endl;
        cout << "NOME DO DONO DO PET: " << strPet[i].nomedono << endl;
        cout << "RG: " << strPet[i].rgdono << endl;
        cout << "TELEFONE: " << strPet[i].telefonedono << endl;
        cout << endl << endl;
    }
}


