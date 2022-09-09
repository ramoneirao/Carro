#include <iostream>
#include "carro.h"
#include "carro.cpp"

using namespace std;

int main(){
    carro zafira(2001, 100000, 58);

    cout << "Zafira" << endl;
    cout << "Ano: " << zafira.getAno() << endl;
    cout << "Quilometragem: " << zafira.getKm() << "Km" << endl;
    cout << "Gasolina: " << zafira.getGas() << "L"<< endl;
    cout << "Carro se movendo!" << endl;
    zafira.acabaGas();
    zafira.carroAndando();
    cout << "Gasolina: " << zafira.getGas() << "L" << endl;
    cout << "Quilometragem: " << zafira.getKm() << "Km" << endl;

    return 0;
}
