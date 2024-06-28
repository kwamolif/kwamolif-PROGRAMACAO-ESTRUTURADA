#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor do produto após um desconto de 13%. 
Apresente o resultado como o abaixo:
Produto: <nome do produto>
Valor: <valor original do produto>
Desconto: <valor do desconto>
Valor Final: <valor do produto após o desconto>

 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
    
    char nomeproduto[50];
    float valorproduto, novovalorproduto, desconto;

    cout << "--- CALCULADORA DE DESCONTO ---" << endl << endl;
    
    cout << "Qual o nome do produto? " << endl;
    cin >> nomeproduto;
    
    cout << endl << endl << "Qual o valor dele? " << endl;
    cin >> valorproduto;
    
    desconto = valorproduto * 0.13;
    
    novovalorproduto = valorproduto - desconto;
    
    cout << endl << endl << "Produto: " << nomeproduto << endl;
    cout << "Valor: " << valorproduto << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor Final: " << novovalorproduto << endl;
}

