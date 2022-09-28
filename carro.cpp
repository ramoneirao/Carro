#include <iostream>
#include <cstdlib>
#include "carro.h"

using std::cout;
using std::endl;

// instanciação das variaveis statics:

int Carro::numCarros = 0;
const string Carro::CORES[ NUMDECORES ] = {"Vermelho","Branco","Preto","Azul"};
const string Carro::motor[5] = {"1.0", "1.4", "1.6", "1.8", "2.0"};

// implementação dos métodos:

Carro::Carro(int ano, float km, float gas, double MAXSPEED, double MINSPEED)
:nameCar(""), MAXSPEED(MAXSPEED), MINSPEED(MINSPEED), MAXSIZENAME(10)
{
    setAno(ano);
    setKm(km);
    setGas(gas);

    numCarros ++;
}

Carro::Carro(const Carro& other)
:MAXSPEED(other.MAXSPEED), MINSPEED(other.MINSPEED), MAXSIZENAME(10)
{
    this-> ano = other.ano;
    this-> km = other.km;
    this-> gas = other.gas;         
    
    numCarros ++;
}

Carro::~Carro()
{
  numCarros --;
}

void Carro::setNameCar(const string & name )
{
    if ( name.length( ) <= MAXSIZENAME )
        nameCar = name;
    else   
        {
            nameCar = name.substr( 0, MAXSIZENAME );
            cout << "Nome truncado. Excedeu o valor maximo de caracteres. \n";
        }
}

void Carro::print() const
{
    int i, j;
    i =  rand()%4;
    j =  rand()%5;
    cout << "Modelo: "<< nameCar << "\n";
    cout << "Motor: "<< motor[j] << "\n";
    cout << "Cor: " << CORES[i] << "\n"; 
    cout << "Ano: " << ano << "\n"; 
    cout << "Gasolina: " << gas << " L\n";   
    cout << "Quilometragem: " << km << " Km\n"; 
    cout << "O carro esta ligado? " << check << '\n'; 
}

void Carro::carroAndando(){
    check = true;
    int i = 0;

    cout << "O carro esta ligado? " << check << '\n'; 
    cout << "Carro se movendo\n";

    cout << "\nGasolina descendo: ";
    while(gas != 40){
    gas -= 1;
    i ++;
    cout << gas << " ";
    }

    cout << "\nQuilometragem subindo:";
    for (int j = 0; j < i; j++) {
    km += 10;
    cout << " " << km;
    }
    cout << "\nGasolina: " << gas << " L \nQuilometragem: " << km << " Km\n";
}

void Carro::setAno(int ano){
    if( ano >= 0 ){
        this->ano = ano;
        return;
    }
    this->ano = 0;
}

double Carro::getMAXSPEED()const
{
    return MAXSPEED;
}

double Carro::getMINSPEED()const
{
    return MINSPEED;
}

float Carro::getGas()const
{
    return gas;
}

float Carro::getKm()const
{    
    return km;
}

int Carro::getAno()const
{
    return ano; 
}

void Carro::setKm(float km) {
    if( km >= 0 ){
        this->km = km;
        return;
    }
    this->km = 0;

}

void Carro::setGas(float gas) {
    if( gas >= 0 ){
        this->gas = gas;
        return;
    }
    this->gas = 0;
} 
