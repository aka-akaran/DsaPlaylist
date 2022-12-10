#include <iostream>
using namespace std ;


int main(){






// Character array V/S Other Array

    int A[5] = { 1, 2, 3, 4, 5 } ;
    char C[8] = "AKA_RAN" ;

    // AKA_RAN is first assigned to some address and then base address of that address is assigned to C

    // BAD PRACTICE
    // char *c = "AKA_RAN"

    // NOTE : Here we can't assign 6 char to C[6], as one is reserved for NULL char



    cout << A << endl ;
    cout << C << endl ;



    int *r = &A[0] ;
    char *c = &C[0] ;

    cout << r << endl ;
    cout << c << endl ;



















    char t = 'z' ;
    char *u = &t ;

    cout << u << endl ;


























    return 0 ;
}