#ifndef _PREVIOUS_VALUE_H_
#define _PREVIOUS_VALUE_H_



#include <stdbool.h>
#include "Validator.h"



typedef struct
{
    int previous_value;
} PreviousValue;



#define PreviousValidator( pPrevious ) { ValidatePrevious, pPrevious }



bool ValidatePrevious( Validator *pThis, int val );



#endif /* _PREVIOUS_VALUE_H_ */
