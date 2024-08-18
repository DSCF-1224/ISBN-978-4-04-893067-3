#ifndef _PREVIOUS_VALUE_VALIDATOR_H_
#define _PREVIOUS_VALUE_VALIDATOR_H_

#include "Validator.h"

typedef struct
{
    Validator base;
    int previous_value;
} PreviousValueValidator;

#define NewPreviousValueValidator { {ValidatePreviousValue}, 0 }

bool ValidatePreviousValue( Validator *pValidator, int val );

#endif /* _PREVIOUS_VALUE_VALIDATOR_H_ */
