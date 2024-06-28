#include <cstdlib>
#include <cstring>
#include <iostream>

/*
 Crie um programa, usando função, que verifica se 3 números podem ser os lados de um triângulo reto
 */

using namespace std;

int qu(int n) {
    return n*n;
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int s1, s2, s3;
    
    cout << "Digite três números: ";
    cin >> s1 >> s2 >> s3;
    
    if (s1 > 0 && s2 > 0 && s3 > 0 && (qu(s1) + qu(s2) == qu(s3)) || (qu(s2) + qu(s3) == qu(s1)) || (qu(s3) + qu(s1) == qu(s2))){
            cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triângulo reto\n"
        } else{
        cout << " " << s1 << " " << s2 << " " << s3 << " nao podem formar um triângulo reto\n"
    }
}

