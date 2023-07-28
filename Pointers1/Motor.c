#include <stdio.h>
#include "Motor.h"

static unsigned int myMotorSpeed = 5;

unsigned int motorMoveLeft(void)
{
    printf("Move Left ->\n");
    return 0;
}

unsigned int motorMoveRight(void)
{
    printf("Move Right <-\n");
    return 0;
}

unsigned int getMotorSpeed(void)
{
    return myMotorSpeed;
}

void setMotorSpeed(unsigned int newSpeed)
{
    if ((newSpeed< 0) || (newSpeed>50))
    {
        printf("Speed not changed!");
    }
    else
    {
        myMotorSpeed = newSpeed;
    }

}

