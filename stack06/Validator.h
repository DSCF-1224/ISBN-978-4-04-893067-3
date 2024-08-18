#ifndef _VALIDATOR_H_
#define _VALIDATOR_H_

#include <stdbool.h>

typedef struct Validator
{
    bool (*const validate)( struct Validator *pThis, int val );
    void *const pData;
} Validator;

#endif /* _VALIDATOR_H_ */
