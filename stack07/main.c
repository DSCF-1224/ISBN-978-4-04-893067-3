#include <stdio.h>
#include "Stack.h"

int main( void )
{
    int buf[16];

    Stack stack = NewStack( buf );
    printf( "%d\n", Push( &stack, 123 ) );

    RangeValidator range_validator            = NewRangeValidator( 0, 9 );
    Stack          stack_with_range_validator = NewStackWithValidator( buf, &range_validator.base );
    printf( "%d\n", Push( &stack_with_range_validator, 123 ) );

    PreviousValueValidator previous_value_validator      = NewPreviousValueValidator;
    Stack                  stack_with_previous_validator = NewStackWithValidator( buf, &previous_value_validator.base );
    printf( "%d\n", Push( &stack_with_previous_validator, 123 ) );
}
