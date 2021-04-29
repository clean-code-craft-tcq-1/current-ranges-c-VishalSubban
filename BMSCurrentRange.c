#include "BMSCurrentRange.h"

#ifndef BMSCURRENTRANGE_C
#define BMSCURRENTRANGE_C


int BMSCurrent_InRange(int numOfSamples,int *BMSCurrentRange,int *currentRange)
{
    int i,count = 0;
    for(i=0;i<numOfSamples;i++)
    {
        if((BMSCurrentRange[i] >= currentRange[0]) && (BMSCurrentRange[i] <= currentRange[1]))
        {
            count++;
        }
    }
    return count;
}

#endif /* BMSCURRENTRANGE_C */