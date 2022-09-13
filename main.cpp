#include <iostream>
#include "carro.h"

using std::cout;

int main(){
    int ano = 1938;
    float km = 999010, gas = 30; 
    const int MAXSPEED = 100;
        
    Carro zafira;
    
    cout << "\n - Zafira\n";
    
    zafira.print();
    cout << "Carro se movendo\n";
    zafira.carroAndando();
    cout << "Velocidade maxima do modelo Zafira: " << zafira.getMAXSPEED() << " Km/h\n";
    cout << "Velocidade mimima do modelo Zafira: " << zafira.getMINSPEED() << " Km/h\n"; 

    Carro fusca (ano, km, gas, MAXSPEED);
    cout << "\n - Fusca\n";
    fusca.print();
    cout << "Velocidade maxima do modelo Fusca: " << fusca.getMAXSPEED() << " Km/h\n";

    cout << "\n - Outro carro, copia de fusca.\n";
    Carro othercarro(fusca);
    othercarro.print();

    return 0;
}
