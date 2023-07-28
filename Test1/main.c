/*  */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned char bite1 = 0x0f;
unsigned char mask1 = 0b00010000;
unsigned char mask2;
unsigned int countVal = 0;
unsigned int funcResult2;


void printNames(void);
unsigned int sumNums(unsigned int x, unsigned int y);

int main()
{
    printMyName();
    unsigned int funcResult1;
    funcResult1 = sumNums(8,42);
    printf("result of func is = %i  \n", funcResult1);
    printf("0x%x \n", bite1);  // 0000 1111
    bite1 &= ~ (1 << 0);
    bite1 &= ~ (1 << 3);
    printf("0x%x \n", bite1);  // 0000 0110

    for(int i=0; i<10; i++)
    {
        printf("\nCounter value = %d",i);
        Sleep(100);
    }


    return 0;
}

void printMyName(void)
{
    printf("Names are: \n Abdel \n Taha \n");
}

unsigned int sumNums(unsigned int x, unsigned int y)
{
    int sum;
    int subt;
    sum = x+y;
    subt = x-y;
    return sum;
}

/* ****** Code cemetery ***************

bit1 = bit1 | mask1;
    printf("bit after 1st modification = 0x%x \n", bit1);
    scanf("%x", &mask2);
    bit1 = bit1 & mask2;
    printf("bit after 2nd modification = 0x%x \n", bit1);


*************************************** */

