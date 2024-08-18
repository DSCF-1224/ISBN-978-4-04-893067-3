#ifndef _RANGE_H_
#define _RANGE_H_



#include <stdbool.h>
#include "Validator.h"



typedef struct
{
    const int min;
    const int max;
} Range;



#define RangeValidator( pRange ) { ValidateRange, pRange }



bool ValidateRange( Validator *pThis, int val );



#endif /* _RANGE_H_ */
