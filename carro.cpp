#include <iostream>
#include "carro.h"

using namespace std;

carro::carro(int a, float v, float g){
    ano = a;
    km = v;
    gas = g;
}

void carro::setAno(int a){
    ano = a; }
int carro::getAno(){
    return ano; }

void carro::setKm(float k) {
    km = k; }
float carro::getKm(){    
    return km; }
    
void carro::setGas(float g) {
    gas = g; } 
float carro::getGas(){
    return gas;}

void carro::acabaGas(){
    if(gas > 0){gas -= 1;} }

void carro::carroAndando(){
    km += 2;}
