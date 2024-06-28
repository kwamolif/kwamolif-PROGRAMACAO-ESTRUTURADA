#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

//Esse programa calcula e mostra o vencedor em uma partida de futebol


int main(int argc, char** argv) {    
    
    setlocale(LC_ALL, "Portuguese");
   
    int golsSPFC,golsSEP;
    
    cout << "Placar São Paulo X Palmeiras" << endl << endl;
    
    cout << "Digite a quantidade de gols do São Paulo:" ;
    cin >> golsSPFC;
    
    cout << endl << "Digite a quantidade de gols do Palmeiras:" ;
    cin >> golsSEP;
    
    if (golsSPFC > golsSEP){
        
    cout << endl << "A festa é tricolor!!!";
    
    }
    else {
        
    cout << endl << "A festa é alviverde!!!";
        
    }  
}

