#include <stdio.h>
#include "Stack.h"

int main( void )
{
    int buf[16];

    Stack stack = NewStack( buf );
    printf( "%d\n", Push( &stack, 123 ) );

    Range     stack_range                = { 0, 9 };
    Validator range_validator            = RangeValidator( &stack_range );
    Stack     stack_with_range_validator = NewStackWithValidator( buf, &range_validator );
    printf( "%d\n", Push( &stack_with_range_validator, 123 ) );

    PreviousValue previous_value                = { 0 };
    Validator     previous_validator            = PreviousValidator( &previous_value );
    Stack         stack_with_previous_validator = NewStackWithValidator( buf, &previous_validator );
    printf( "%d\n", Push( &stack_with_previous_validator, 123 ) );
}
