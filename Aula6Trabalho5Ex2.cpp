#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>



using namespace std;

/* 
O usuário deve digitar o número de medalhas de OURO, PRATA e BRONZE;
No final deve ser somado o número de medalhas de OURO, PRATA e BRONZE para apresentar o total de medalhas que o Brasil ganhou;
A formatação da tela de execução é importante; 
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int qtdouro, qtdprata, qtdbronze, totalmedalha;

    cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> qtdouro;

    cout << endl << "Digite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> qtdprata;

    cout << endl <<  "Digite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas:" << endl;
    cin >> qtdbronze;

    totalmedalha = qtdouro + qtdprata + qtdbronze;
    
    cout << endl <<  "O Brasil ganhou " << totalmedalha << " medalhas nas Olimpíadas." << endl << endl;
    
}

