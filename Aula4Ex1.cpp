#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>



using namespace std;

// Faça um programa que mostre algumas atribuições

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int a = 2, b = 3, c = 5, d = 4, e, r;
    float z;
    
    e = c * b;
    cout << b << ", " << c << ", " << e << endl;
    
    z = c++ % b;
    cout << b << ", " << c << ", " << z << endl;
    
    r = -b;
    cout << r << ", " << b << endl;
    
    d *= a + b;
    cout << a << ", " << b << ", " << d << endl;
    
    a += b += c += 5;
    cout << a << ", " << b << ", " << c << endl;
}



