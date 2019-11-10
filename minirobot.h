#ifndef MINIROBOT_H_INCLUDED
#define MINIROBOT_H_INCLUDED
#include "robot.h"

class minirobot:public Robot
{
private:
    float velRoda1, velRoda2;
    int sensorPres1, sensorPres2, sensorPres3;
    float sensorDist1, sensorDist2;
    float alt, peso, larg, comp;

public:
    minirobot();
    float getVelRoda1();
    float getVelRoda2();
    int getSensorPres1();
    int getSensorPres2();
    int getSensorPres3();
    float getSensorDist1();
    float getSensorDist2();
    float getAlt();
    float getPeso();
    float getLarg();
    float getComp();
    void setVelRoda1(float);
    void setVelRoda2(float);
    void setSensorPres1(int);
    void setSensorPres2(int);
    void setSensorPres3(int);
    void setSensorDist1(float);
    void setSensorDist2(float);
    void setAlt(float);
    void setPeso(float);
    void setLarg(float);
    void setComp(float);
};

#endif // MINIROBOT_H_INCLUDED
