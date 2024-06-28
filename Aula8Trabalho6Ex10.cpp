#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

/*
Escreva um programa em C++ que receba do usuário dados de um PET (nome do animal, espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono).
O programa deve solicitar os dados de N PETs e salvar os dados cadastrados em um arquivo.TXT.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int x, i;

    cout << "Quantos animais vai cadastrar? ";
    cin >> x;

    cin.ignore();

    cout << endl;

    struct DadosPet {
        char nome[50], especie[30], raca[20], sexo[10], nomedono[50];
        int idade, rgdono, telefonedono;
    } strPet[x];

    fflush(stdin);

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

    ofstream arquivo;

    arquivo.open("Aula8Trabalho6Ex10-PETS.txt", ios::app);

    arquivo << "Pets cadastros com sucesso!" << endl << endl;

    for (i = 0; i < x; i++) {
        arquivo << "NOME DO PET: " << strPet[i].nome << endl;
        arquivo << "ESPÉCIE DO PET: " << strPet[i].especie << endl;
        arquivo << "RAÇA DO PET: " << strPet[i].raca << endl;
        arquivo << "SEXO DO PET: " << strPet[i].sexo << endl;
        arquivo << "IDADE DO PET: " << strPet[i].idade << endl;
        arquivo << "NOME DO DONO DO PET: " << strPet[i].nomedono << endl;
        arquivo << "RG: " << strPet[i].rgdono << endl;
        arquivo << "TELEFONE: " << strPet[i].telefonedono << endl;
        arquivo << endl << endl;
    }
}


