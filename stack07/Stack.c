#include "Stack.h"



static bool Validate( Validator *pValidator, int val )
{
    if ( !pValidator ) return true;
    return pValidator->validate( pValidator, val );
}



static bool IsStackFull( const Stack *pStack )
{
    return ( (size_t)(pStack->top) == pStack->size );
}



static bool IsStackEmpty( const Stack *pStack )
{
    return ( pStack->top == 0 );
}



bool Pop( Stack *pStack, int *pRet )
{
    if ( IsStackEmpty( pStack ) ) return false; /* 失敗 */
    *pRet = pStack->pBuf[ --pStack->top ];
    return true; /* 成功 */
}



bool Push( Stack *pStack, int val )
{
    if ( ( ! Validate( pStack->pValidator, val ) ) || IsStackFull( pStack ) ) return false; /* 失敗 */
    pStack->pBuf[ pStack->top++ ] = val;
    return true; /* 成功 */
}
