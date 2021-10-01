#include <stdio.h>
#include <stdlib.h> /* rand(  ) */
#define SIZEBUFF 50
void swap( int *vector, int i, int j );
void insertionSort( int *vector, int max );
void initRand( int *vector, int upper );

int main( void ){
    int V[SIZEBUFF];
    int length = sizeof( V )/sizeof( *V );

    initRand( V, 20 );
    insertionSort( V, length );

    for( int i=0 ; i<length ; i++ ){
        printf( "V[%d]=%d\n", i, V[i] );
    }

    return 0;
}

void swap( int *vector, int i, int j ){
    int keep_val = vector[i];
    vector[i] = vector[j];
    vector[j] = keep_val;
}

void insertionSort( int *vector, int max ){
    int lead=1; int j=lead; int i=j-1;
    while( lead<max ){
        j=lead; i=j-1;
        while( ( vector[j]<=vector[i] ) && ( i>=0 ) ){
            swap( vector, j, i );
            j--; i--;
        }
        lead++;
    }
}

void initRand( int *vector, int upper ){
    for( int i=0 ; i<SIZEBUFF ; i++ ){
        vector[i] = rand(  ) % upper;
    }
}
