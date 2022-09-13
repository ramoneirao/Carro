#include <iostream>
#include "carro.h"

using std::cout;

Carro::Carro(int ano, float km, float gas, double MAXSPEED, double MINSPEED)
:MAXSPEED(MAXSPEED), MINSPEED(MINSPEED)
{
    setAno(ano);
    setKm(km);
    setGas(gas);
}

Carro::Carro(const Carro& other)
:MAXSPEED(other.MAXSPEED), MINSPEED(other.MINSPEED)
{
    this-> ano = other.ano;
    this-> km = other.km;
    this-> gas = other.gas;
}

Carro::~Carro()
{
  
}

void Carro::print() const
{
    cout << "Ano: " << ano << "\n"; 
    cout << "Gasolina: " << gas << " L\n";   
    cout << "Quilometragem: " << km << " Km\n"; 
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