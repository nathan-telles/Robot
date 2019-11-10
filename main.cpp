#include <iostream>
#include "minirobot.h"
#include "robot.h"

using namespace std;

int main()
{
    Estado lado;
    lado.x=0;
    lado.y=0;
    lado.theta=90;
    minirobot Sherlock;
    Sherlock.setNumeroMotores(2);
    Sherlock.setNumeroSensores(3);
    Sherlock.setNivelBateria(75);
    Sherlock.setOrientacao(lado);
    Sherlock.setAlt(8);
    Sherlock.setLarg(10);
    Sherlock.setComp(10);
    Sherlock.setPeso(0.5);
    Sherlock.setVelRoda1(0);
    Sherlock.setVelRoda2(50);
    Sherlock.setSensorDist1(20);
    Sherlock.setSensorDist2(20);
    Sherlock.setSensorPres1(0);
    Sherlock.setSensorPres2(1);
    Sherlock.setSensorPres3(0);
    Sherlock.getNivelBateria();
    Sherlock.getNumeroMotores();
    Sherlock.getNumeroSensores();
    Sherlock.getOrientacao();
    Sherlock.getAlt();
    Sherlock.getLarg();
    Sherlock.getComp();
    Sherlock.getPeso();
    Sherlock.getVelRoda1();
    Sherlock.getVelRoda2();
    Sherlock.getSensorDist1();
    Sherlock.getSensorDist2();
    Sherlock.getSensorPres1();
    Sherlock.getSensorPres2();
    Sherlock.getSensorPres3();
    return 0;
}
