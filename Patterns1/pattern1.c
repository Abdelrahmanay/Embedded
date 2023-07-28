#include <stdio.h>
#include "pattern1.h"

uint16_t drawLeftPyramide(uint16_t n, uint16_t shapeID)
{


    for(uint16_t i_line = 1; i_line <= n; i_line++)
    {
        for (uint8_t i_col = 1; i_col <= i_line; i_col++)
        {
            if (shapeID == 0)
            {
                printf("* ");
            }
            else
            {
                printf("%i ", i_col);
            }

        }
        printf("\n");
    }
    return 0;
}
