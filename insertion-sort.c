#include <stdio.h>
#include "ctools.h"

int main( void ){
    int arrayInt[ SIZEBUFF ];

    initRand( arrayInt, 30 );
    insertionSortIntervalDec( arrayInt, 10, 21 );

    for( int i=0 ; i<SIZEBUFF ; i++ ){
        printf( "arrayInt[%d]=%d\n", i, arrayInt[i] );
    }

    return 0;
}

