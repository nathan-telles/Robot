#include "minirobot.h"
#include <iostream>

using namespace std;

minirobot::minirobot(){
}
float minirobot::getVelRoda1(){
    cout<<velRoda1<<endl;
}
float minirobot::getVelRoda2(){
    cout<<velRoda2<<endl;
}
int minirobot::getSensorPres1(){
    cout<<sensorPres1<<endl;
}
int minirobot::getSensorPres2(){
    cout<<sensorPres2<<endl;
}
int minirobot::getSensorPres3(){
    cout<<sensorPres3<<endl;
}
float minirobot::getSensorDist1(){
    cout<<sensorDist1<<endl;
}
float minirobot::getSensorDist2(){
    cout<<sensorDist2<<endl;
}
float minirobot::getAlt(){
    cout<<alt<<endl;
}
float minirobot::getPeso(){
    cout<<peso<<endl;
}
float minirobot::getLarg(){
    cout<<larg<<endl;
}
float minirobot::getComp(){
    cout<<comp<<endl;
}
void minirobot::setVelRoda1(float vr1){
    this-> velRoda1 = vr1;
}
void minirobot::setVelRoda2(float vr2){
    this->velRoda2 = vr2;
}
void minirobot::setSensorPres1(int sp1){
    this->sensorPres1 = sp1;
}
void minirobot::setSensorPres2(int sp2){
    this->sensorPres2 = sp2;
}
void minirobot::setSensorPres3(int sp3){
    this->sensorPres3 = sp3;
}
void minirobot::setSensorDist1(float sd1){
    this->sensorDist1 = sd1;
}
void minirobot::setSensorDist2(float sd2){
    this->sensorDist2 = sd2;
}
void minirobot::setAlt(float alt){
    this-> alt = alt;
}
void minirobot::setPeso(float peso){
    this-> peso = peso;
}
void minirobot::setLarg(float larg){
    this-> larg = larg;
}
void minirobot::setComp(float comp){
    this-> comp = comp;
}
