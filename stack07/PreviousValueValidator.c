#include "PreviousValueValidator.h"

bool ValidatePreviousValue( Validator *pValidator, int val )
{
    PreviousValueValidator *pThis = ( PreviousValueValidator * )pValidator;
    if ( val < pThis->previous_value ) return false;
    pThis->previous_value = val;
    return true;
}
