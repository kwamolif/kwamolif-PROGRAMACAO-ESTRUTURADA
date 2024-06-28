#include <cstdlib>
#include <cstring>
#include <iostream>
#define naluno 3

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    struct EstruturaAluno {
        char nome[60], matricula[10];
        int anoingresso;
    } strAluno[naluno];

    int i;

    for (i = 0; i < naluno; i++) {
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matricula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoingresso;
        cout << endl;
        fflush(stdin);
    }

    cout << endl;
    cout << "Alunos cadastrados com sucesso!" << endl << endl;
    
    for (i = 0; i < naluno; i++) {
        cout << "Aluno: " << strAluno[i].nome << endl;
        cout << "Matricula: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso: " << strAluno[i].anoingresso << endl;
        cout << endl;
    }

}

