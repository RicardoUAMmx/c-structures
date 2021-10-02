#include <stdio.h>
#include <stdlib.h> /* rand(  ) */
#include "ctools.h"

void swap( int *i, int *j ){
    int keep_val = *i;
    *i = *j;
    *j = keep_val;
}

void insertionSortInc( int vector[ SIZEBUFF ] ){
    int lead=1; int j=lead; int i=j-1;
    while( lead<SIZEBUFF ){
        j=lead; i=j-1;
        while( ( vector[j]<=vector[i] ) && ( i>=0 ) ){
            swap( &vector[ j ], &vector[ i ] );
            j--; i--;
        }
        lead++;
    }
}

void insertionSortRev( int vector[ SIZEBUFF ] ){
    int lead=SIZEBUFF-2; int j=lead; int i=j+1;
    while( lead>=0 ){
        j=lead; i=j+1;
        while( ( vector[j]>=vector[i] ) && ( i<SIZEBUFF ) ){
            swap( &vector[ j ], &vector[ i ] );
            j++; i++;
        }
        lead--;
    }
}

void insertionSortIntervalDec( int vector[ SIZEBUFF ], int min, int max ){
    int lead=min+1; int j=lead; int i=j-1;
    while( lead<max ){
        j=lead; i=j-1;
        while( ( vector[j]>=vector[i] ) && ( min>=0 ) ){
            swap( &vector[ j ], &vector[ i ] );
            j--; i--;
        }
        lead++;
    }
}

void insertionSortIntervalInc( int vector[ SIZEBUFF ], int min, int max ){
    int lead=min+1; int j=lead; int i=j-1;
    while( lead<max ){
        j=lead; i=j-1;
        while( ( vector[j]<=vector[i] ) && ( i>=min ) ){
            swap( &vector[ j ], &vector[ i ] );
            j--; i--;
        }
        lead++;
    }
}

void insertionSortDec( int vector[ SIZEBUFF ] ){
    int lead=1; int j=lead; int i=j-1;
    while( lead<SIZEBUFF ){
        j=lead; i=j-1;
        while( ( vector[j]>=vector[i] ) && ( i>=0 ) ){
            swap( &vector[ j ], &vector[ i ] );
            j--; i--;
        }
        lead++;
    }
}

void initRand( int vector[ SIZEBUFF ], int upper ){
    for( int i=0 ; i<SIZEBUFF ; i++ ){
        vector[i] = rand(  ) % upper;
    }
}
