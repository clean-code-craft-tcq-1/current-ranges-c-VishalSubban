#include <stdio.h>

#ifndef BMSCURRENTRANGE_H
#define BMSCURRENTRANGE_H

typedef enum
{
    InRange,
    OutOfRange
}CurrentRange;

int BMSCurrent_InRange(int numofReadings,int *BMS_Current_Range,int *defined_range);
#endif /* BMSCURRENTRANGE_H */