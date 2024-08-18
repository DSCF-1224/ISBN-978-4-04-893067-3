#include "Range.h"

bool ValidateRange( Validator *pThis, int val )
{
    Range *pRange = ( Range * )( pThis->pData );
    return ( pRange->min <= val ) && ( val <= pRange->max );
}
