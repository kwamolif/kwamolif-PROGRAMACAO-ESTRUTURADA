#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

/*
Escrever um programa que lê o número de identificação de um aluno (matrícula), 3 notas (0 até 10) obtidas nas atividades da disciplina. 
Calcular a média de aproveitamento, usando a fórmula: 

A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento	Conceito
9,0	        A
7,5 e < 9,0	B
6,0 e < 7,5	C
4,0 e < 6,0	D
< 4,0	        E

O programa deve escrever o número do aluno (matrícula), suas notas, a média de aproveitamento e o conceito correspondente. 
De acordo com o conceito exiba a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media;
    long int matricula;


    cout << "                --- CALCULADORA DE NOTAS ---                  " << endl << endl;


    cout << "Digite a matrícula do aluno: ";
    cin >> matricula;

    cout << "Digite as três notas do aluno: ";
    cin >> n1 >> n2 >> n3;

    cout << fixed << setprecision(2);

    media = (n1 + (n2 * 2) + (n3 * 3)) / 6;


    if (media >= 9) {

        cout << endl << "O aluno de matrícula " << matricula << " obteve as notas " << n1 << ", " << n2 << " e " << n3 << ". A média é " << media << ", sendo equivalente ao conceito A." << endl << endl;

        cout << "APROVADO!";

    }

    if (media < 9 && media >= 7.5) {

        cout << endl << "O aluno de matrícula " << matricula << " obteve as notas " << n1 << ", " << n2 << " e " << n3 << ". A média é " << media << ", sendo equivalente ao conceito B." << endl << endl;

        cout << "APROVADO!";

    }

    if (media < 7.5 && media >= 6) {

        cout << endl << "O aluno de matrícula " << matricula << " obteve as notas " << n1 << ", " << n2 << " e " << n3 << ". A média é " << media << ", sendo equivalente ao conceito C." << endl << endl;

        cout << "APROVADO!";

    }

    if (media < 6 && media >= 4) {

        cout << endl << "O aluno de matrícula " << matricula << " obteve as notas " << n1 << ", " << n2 << " e " << n3 << ". A média é " << media << ", sendo equivalente ao conceito D." << endl << endl;

        cout << "REPROVADO!";

    }

    if (media < 4) {

        cout << endl << "O aluno de matrícula " << matricula << " obteve as notas " << n1 << ", " << n2 << " e " << n3 << ". A média é " << media << ", sendo equivalente ao conceito E." << endl << endl;

        cout << "REPROVADO!";

    }

}

