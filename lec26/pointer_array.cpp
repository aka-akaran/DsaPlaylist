#include <iostream>
using namespace std ;


int main(){




// Pointer to array

    int arr[10] = { 101, 102, 103, 104 } ;

    cout << endl ;
    cout << arr[0] << endl << endl ;
    cout << "Address of First Memory Block is " << arr << endl ;
    cout << "Address of First Memory Block is " << &arr << endl ;
    cout << "Address of First Memory Block is " << &arr[0] << endl ;

    cout << "4th " << *arr  << endl ;
    cout << "5th " << *arr + 10 << endl ;
    cout << "6th " << *(arr + 1)  << endl ;
    cout << "7th " << *(arr) + 10  << endl ;
    cout << "8th " << arr[2]  << endl ;
    cout << "9th " << *(arr + 2)  << endl ;




    int i = 3 ;
    cout << i[arr] << endl ;

    // NOTE : arr[i]    =   *( arr + i )   =   *( i + arr )   =    i[arr]










    int temp[10] = { 1, 2, 3 } ;
    cout << "1st " <<sizeof( temp ) << endl;
    cout << "2nd " <<sizeof( *temp ) << endl;
    cout << "3rd " <<sizeof( &temp ) << endl;
    cout << endl ;

    // NOTE : 1st and 3rd



















    int *ptr = &temp[0] ;
    cout << "1st " <<sizeof( ptr ) << endl;
    cout << "2nd " <<sizeof( *ptr ) << endl;
    cout << "3rd " <<sizeof( &ptr ) << endl;
    cout << endl ;

























    // Comparison array and pointer

    cout << " &temp[0]  --> " << &temp[0] << endl ;
    cout << " &ptr  --> " << &ptr << endl ;


























    int a[10] ;

// ERROR -- Can't Modify Symbol Table
    // a = a + 1 ;




























    int b[10] ;

    int *q = &b[0] ;
    cout << q << endl ;
    q = q + 1 ;
    cout << q << endl ;

    // NOTE : Here we have modified pointer q, but in the case of array we can't modify
    // as modification is happening in symbol table




























// Character array V/S Other Array

    int A[5] = { 1, 2, 3, 4, 5 } ;
    char C[8] = "AKA_RAN" ;

    // AKA_RAN is first assigned to some address and then base address of
    // that address is assigned to C

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




































// POINTER TO FUNCTIONS


























    return 0 ;
}