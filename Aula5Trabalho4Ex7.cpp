#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
O cardápio de um carrinho de lanche é o seguinte: 
 
Especificação	 Código  Preço	   
Cachorro quente   100	  9,20	   
Bauru simples	  101	  12,00	   
Bauru com ovo	  102	  13,00	   
Hamburger	  103	  10,00	   
Cheeseburguer	  104	  12,00	   
Refrigerante Lata 105	  5,00	   
Água	          106	  3,00	 

Escrever um programa que leia o código do item pedido, a quantidade do item e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. 
Informe que código inválido caso seja digitado algo diferente.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int codigo, qtdpedido;
    float valorpedido;

    cout << "                --- CARDÁPIO ---                  " << endl << endl;


    cout << " CÓDIGO: 100 | PEDIDO: CACHORRO QUENTE   | PREÇO: R$ 9.20 " << endl;
    cout << " CÓDIGO: 101 | PEDIDO: BAURU SIMPLES     | PREÇO: R$ 12   " << endl;
    cout << " CÓDIGO: 102 | PEDIDO: BAURU COM OVO     | PREÇO: R$ 13   " << endl;
    cout << " CÓDIGO: 103 | PEDIDO: HAMBURGUER        | PREÇO: R$ 10   " << endl;
    cout << " CÓDIGO: 104 | PEDIDO: CHEESEBURGUER     | PREÇO: R$ 12   " << endl;
    cout << " CÓDIGO: 105 | PEDIDO: REFRIGERANTE LATA | PREÇO: R$ 5    " << endl;
    cout << " CÓDIGO: 106 | PEDIDO: ÁGUA              | PREÇO: R$ 3    " << endl << endl;

    cout << " Digite o código do seu pedido: ";
    cin >> codigo;

    cout << " Digite a quantidade do pedido: ";
    cin >> qtdpedido;


    switch (codigo) {

        case 100:
        {
            valorpedido = 9.2 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 101:
        {
            valorpedido = 12 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 102:
        {
            valorpedido = 13 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 103:
        {
            valorpedido = 10 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 104:
        {
            valorpedido = 12 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 105:
        {
            valorpedido = 5 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }

        case 106:
        {
            valorpedido = 3 * qtdpedido;
            cout << endl << endl << " O valor do pedido é: R$ " << valorpedido << " reais";
            break;
        }
        default:
        {

            cout << endl << endl << " NÃO TEMOS ESSE CÓDIGO! ";
            
        }

    }
}

