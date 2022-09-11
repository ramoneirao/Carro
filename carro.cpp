#include <iostream>
#include "carro.h"

using std::cout;

carro::carro(int ano, float km, float gas, double MAXSPEED, double MINSPEED)
:MAXSPEED(MAXSPEED), MINSPEED(MINSPEED)
{
    setAno(ano);
    setKm(km);
    setGas(gas);
}

carro::carro(const carro& other)
:MAXSPEED(other.MAXSPEED), MINSPEED(other.MINSPEED)
{
    this-> ano = other.ano;
    this-> km = other.km;
    this-> gas = other.gas;
}

carro::~carro()
{
  
}

void carro::print() const
{
    cout << "Ano: " << ano << "\n"; 
    cout << "Gasolina: " << gas << " L\n";   
    cout << "Quilometragem: " << km << " Km\n"; 
}

float carro::getGas()const
{
    return gas;
}

float carro::getKm()const
{    
    return km;
}

int carro::getAno()const
{
    return ano; 
}

void carro::setKm(float km) {
    if( km >= 0 ){
        this->km = km;
        return;
    }
    this->km = 0;

}

void carro::setGas(float gas) {
    if( gas >= 0 ){
        this->gas = gas;
        return;
    }
    this->gas = 0;
} 

void carro::carroAndando(){
    km += 2;
    if(gas > 0){
    gas -= 1;
    } 
    cout << "Gasolina: " << gas << " L \nQuilometragem: " << km << " Km\n";
}

void carro::setAno(int ano){
    if( ano >= 0 ){
        this->ano = ano;
        return;
    }
    this->ano = 0;
}

double carro::getMAXSPEED()const
{
    return MAXSPEED;
}

double carro::getMINSPEED()const
{
    return MINSPEED;
}