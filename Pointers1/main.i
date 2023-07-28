# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "main.c"



# 1 "Motor.h" 1


unsigned int motorMoveLeft(void);
unsigned int motorMoveRight(void);
unsigned int getMotorSpeed(void);
void setMotorSpeed(unsigned int newSpeed);
# 5 "main.c" 2
# 1 "Sensor.h" 1

int sensorReadValue();
# 6 "main.c" 2

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
