#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/* 
O usuário deve digitar sua idade.
Idade maior ou igual a 65 anos, o usuário poderá ser atendido em caixa preferencial. Idade menor que 65 anos, o usuário será  atendido nos caixas convencionais (caixa 2, caixa 3, caixa 4).
A formatação da tela de execução é importante;
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int idade;

    cout << "Digite sua idade:" << endl;
    cin >> idade;

    if (idade >= 65) {

        cout << "Você pode ser atendido em fila preferencial." << endl << endl;
        cout << "Dirija-se ao caixa 1." << endl << endl;
        
    } 
    else {
        
        cout << "Você será atendido nos caixas convencionais." << endl;
        cout << "Dirija-se a um dos caixas:" << endl;
        cout << "Caixa 2." << endl;
        cout << "Caixa 3." << endl;
        cout << "Caixa 4." << endl << endl;
        
    }
}

