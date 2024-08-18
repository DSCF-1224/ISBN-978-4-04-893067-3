#ifndef _STACK_H_
#define _STACK_H_



#include <stdbool.h>
#include <stddef.h>

#include "PreviousValue.h"
#include "Range.h"



typedef struct
{
    int top;
    const size_t size;
    int *const pBuf;

    Validator *const pValidator;
} Stack;



bool Pop( Stack *pStack, int *pRet );
bool Push( Stack *pStack, int val );


#define NewStack( buf )                          { 0, ( sizeof( buf ) / sizeof( int ) ), ( buf ), NULL }
#define NewStackWithValidator( buf, pValidator ) { 0, ( sizeof( buf ) / sizeof( int ) ), ( buf ), pValidator }



#endif /* _STACK_H_ */
