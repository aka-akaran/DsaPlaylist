#include <iostream>
using namespace std ;

int main (){

    // can't assign int type to pointer type
    
    // int num = 5 ;
    // int *p = num ;






    // ERROR --> Can't assign pointer type to int type

    // *p2 = &num ;









    

    // decleration of pointer
    //  &num = address of num ;

    // METHOD 1 : Directly assign address to pointer

    int num = 5 ;
    int *p1 = &num ;

    cout << "Address of num " << &num << endl ;


    // METHOD 2 : First create null pointer and then assign it an address

    double f = 2.0 ;

    double *p2 = 0 ;
    p2 = &f ;

    cout << "Address of f " << &f << endl << endl ;














    cout << "size of num(int) " << sizeof(num) << endl ;
    cout << "size of f(float) " << sizeof(f) << endl ;
    cout << "size of p1(pointer to num) " << sizeof(p1) << endl ;
    cout << "size of p2(pointer to f) " << sizeof(p2) << endl ;

    // NOTE : pointer contain address therefore it has fixed size of 8 bytes






















    int *p3 ;

    // NOTE : Pointer to int is created and pointing to some garbage value
    // BAD PRACTICE




















    // can't derefrence NULL pointer
    // Segmentation Fault

    // int *p4 = 0 ;
    // cout << *p4 << endl;






















    int a = 9 ;
    int *p5 = &a ;

    cout << p5 << endl;
    cout << *p5 << endl;
    *p5 = *p5 * 5 ;
    cout << *p5 << endl ;






















    // copying a pointer
    int *p6 = p5 ;
    cout << p5 << "--" << p6 << endl ;
    cout << *p5 << "--" << *p6 << endl ;
    
    cout << "address before " << p6 << endl ;
    p6 = p6 + 1 ;
    cout << "address after " << p6 << endl ;




















    return 0 ;
}