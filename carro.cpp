#include <iostream>
#include "carro.h"

using std::cout;
using std::endl;

// implementação dos métodos:

int Carro::numCarros = 0;
const string Carro::CORES[ NUMDECORES ] = {"Vermelho","Branco","Preto","Azul"};


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
  
}

void Carro::setNameCar( string name )
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
    int i;
    i =  rand()%4;
    cout << "Modelo: "<< nameCar << "\n";
    cout << "Cor: " << CORES[i] << "\n"; 
    cout << "Ano: " << ano << "\n"; 
    cout << "Gasolina: " << gas << " L\n";   
    cout << "Quilometragem: " << km << " Km\n"; 
    cout << "O carro esta ligado? " << check << '\n'; 
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

void Carro::carroAndando(){
    check = true;

    cout << "Carro se movendo\n";
    cout << "O carro esta ligado? " << check << '\n'; 
    km += 2;
    if(gas > 0){
    gas -= 1;
    } 
    cout << "Gasolina: " << gas << " L \nQuilometragem: " << km << " Km\n";
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