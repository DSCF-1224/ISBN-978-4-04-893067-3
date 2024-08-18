#include "RangeValidator.h"

bool ValidateRange( Validator *pValidator, int val )
{
    RangeValidator *pThis = ( RangeValidator * )pValidator;
    return ( pThis->min <= val ) && ( val <= pThis->max );
}
