#include "robot.h"
#include <iostream>

using namespace std;

Robot::Robot(){
}
void Robot::getOrientacao(){
    cout<<orientacao.x<<endl<<orientacao.y<<endl<<orientacao.theta<<endl;
}

void Robot::getNumeroMotores(){
    cout<<numeroMotores<<endl;
}
void Robot::getNumeroSensores(){
    cout<<numeroSensores<<endl;
}
void Robot::getNivelBateria(){
    cout<<bateria<<endl;
}
void Robot::setOrientacao(Estado orientacao){
    this->orientacao.x = orientacao.x;
    this->orientacao.y = orientacao.y;
    this->orientacao.theta = orientacao.theta;
}
void Robot::setNivelBateria(float bateria){

     this->bateria = bateria;

}
void Robot::setNumeroMotores(int numeroMotores){

     this->numeroMotores = numeroMotores;

}
void Robot::setNumeroSensores(int numeroSensores){

     this->numeroSensores = numeroSensores;

}
