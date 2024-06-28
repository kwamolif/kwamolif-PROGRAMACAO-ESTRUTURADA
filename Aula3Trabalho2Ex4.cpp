#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <cctype>


using namespace std;

/*
Crie um programa para exibir o nome dos times (São Paulo, Santos, Palmeiras e Corinthians) na tela e que permita ao usuário a escolha de uma opção. Imprima uma mensagem sobre o time escolhido. 
Exemplo :
1 – São Paulo 
2 - Santos 
3 - Palmeiras 
4 – Corinthians
*/

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int time;

    cout << "Digite - 1 - para SÃO PAULO \n";
    cout << "Digite - 2 - para SANTOS \n";
    cout << "Digite - 3 - para PALMEIRAS \n";
    cout << "Digite - 4 - para CORINTHIANS" << endl << endl;
    cin >> time;

    switch (time) {

        case 1:
            cout << endl << "O São Paulo viveu 78 anos sem jamais ter conquistado um tricampeonato. Quando conquistou, foi logo o do Campeonato Brasileiro: 2006, 2007 e 2008.";
            break;

        case 2:
            cout << endl << "O Santos foi o primeiro time brasileiro a vencer a Libertadores e o Mundial, em 1962. O futebol brasileiro só voltaria a ganhar o Mundial em 1981, com o Flamengo.";
            break;

        case 3:
            cout << endl << "Mesmo jogando apenas 34 jogos, 1919 ficou marcado na história do Palmeiras, já que foi o ano em que o time marcou mais gols (197).";
            break;

        case 4:
            cout << endl << "Desde março de 1930, quando foi disputada a primeira partida entre os gigantes da capital paulista, foram 359 confrontos, com 133 vitórias para o lado do Corinthians e 111 para o São Paulo, além de 115 empates.";
            break;

        default:
            cout << "Não temos essa opção!";
    }
}



