#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

void oi(void) {
    cout << "Oi, esse é o primeiro exemplo de definição de FUNÇÃO em C++." << endl;
    cout << "Ainda veremos outros exemplos." << endl << endl;
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    while (i <= 5) {
        
        oi();
        i++;
    }
}

