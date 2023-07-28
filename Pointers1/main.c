#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Motor.h"
#include "Sensor.h"

unsigned int x = 93;
unsigned int *ptr = &x;
unsigned int y = 84;

int main()
{
    motorMoveLeft();
    motorMoveRight();
    printf("Current motor speed : %i\n", getMotorSpeed());
    setMotorSpeed(40);
    printf("Current motor speed : %i\n", getMotorSpeed());

    sensorReadValue();
    printf("%d\n", *ptr);

    register unsigned int i;
    for (i=0; i<5; i++)
    {
        printf("count : %i\n", i+y);
        Sleep(200);
    }
    return 0;
}
