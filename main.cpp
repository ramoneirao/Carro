#include <iostream>
#include <string>
#include "carro.h"

using std::cin;
using std::cout;

int main(){
    string name1;
        
    Carro car1;
    cout << "\n - Primeiro carro\n";
    cout << "Modelo do carro: "; 
    getline(cin, name1);
    car1.setNameCar(name1);
    car1.print();
    car1.carroAndando();

    Carro car2;
    cout << "\n - Segundo carro\n";
    Carro *carroPtr = &car2;
    carroPtr->setNameCar("Vectra");
    carroPtr->print();

    cout << "\nQuantidade de carros criados: " << Carro::numCarros <<"\n";

    return 0;
}
