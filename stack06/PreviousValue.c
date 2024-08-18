#include "PreviousValue.h"

bool ValidatePrevious( Validator *pThis, int val )
{
    PreviousValue *pPrevious = ( PreviousValue * )( pThis->pData );
    if ( val < pPrevious->previous_value ) return false;
    pPrevious->previous_value = val;
    return true;
}
