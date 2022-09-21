#include <iostream>
#include <string>
#include "carro.h"

using std::cin;
using std::cout;

int main(){
    int ano = 1938;
    float km = 999010, gas = 30; 
    const int MAXSPEED = 100;
    string name1, name2, name3;
        
    Carro car1;
    
    cout << "\n - Primeiro carro\n";
    cout << "Modelo do carro: ";
    getline(cin, name1);
    car1.setNameCar(name1);
    car1.print();
    car1.carroAndando();
    cout << "Velocidade maxima: " << car1.getMAXSPEED() << " Km/h\n";
    cout << "Velocidade mimima: " << car1.getMINSPEED() << " Km/h\n"; 

    Carro car2 (ano, km, gas, MAXSPEED);
    cout << "\n - Segundo carro\n";
    cout << "Modelo do carro: ";
    getline(cin, name2);
    car2.setNameCar(name2);
    car2.print();
    cout << "Velocidade maxima: " << car2.getMAXSPEED() << " Km/h\n";

    cout << "\n - Outro carro, copia do segundo.\n";
    Carro othercarro(car2);
    cout << "Modelo do carro: ";
    getline(cin, name3);
    othercarro.setNameCar(name3);
    othercarro.print();

    cout << "\nQuantidade de carros criados: " << Carro::numCarros <<"\n";

    return 0;
}
