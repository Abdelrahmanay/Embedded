#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t myArr[5] = {2,3,6,7,9};
char myStr[3][20] = {"Abdelrahman", "Ayman", "Taha"};

void printArr(uint16_t argArr[], uint16_t arrlength);
void printStr(char argStr[][20], uint16_t strLength);

int main()
{
    printf("Number of elements of myArr = %i \n", (uint16_t)(sizeof(myArr)/sizeof(myArr[0])));
    printArr(myArr, 5);
    printStr(myStr, 3);
    return 0;
}

void printArr(uint16_t argArr[], uint16_t arrlength)
{
    for(uint16_t index=0; index < arrlength; index++)
    {
        printf("Arr[%i] = %i \n",index,argArr[index]);
    }
}

void printStr(char argStr[][20], uint16_t strLength)
{
    for(uint16_t index=0; index < strLength; index++)
    {
        printf("Str[%i] = %s \n",index,argStr[index]);
    }
}
