#ifndef _RANGE_VALIDATOR_H_
#define _RANGE_VALIDATOR_H_

#include "Validator.h"

typedef struct
{
    Validator base;
    const int min;
    const int max;
} RangeValidator;

#define NewRangeValidator( min, max ) { {ValidateRange}, (min), (max) }

bool ValidateRange( Validator *pValidator, int val );

#endif /* _RANGE_VALIDATOR_H_ */
