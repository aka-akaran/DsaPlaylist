#include<iostream>
using namespace std ;

int main(){

    cout << "namaste dunia" << endl;

    // Data Types
    int i = 23;
    cout << "Size of int --> " << sizeof(i) << endl ;

    float f = 2.3 ;
    cout << "Size of float --> " <<  sizeof(f) << endl ;

    double d = 23;
    cout << "Size of double --> " <<  sizeof(d) << endl ;

    char c = 'a' ;
    cout << "Size of char --> " <<  sizeof(c) << endl ;

    // Type Casting


    // When assigned integer is range of 8 bits or 1 byte
    
    c = 97 ;
    cout << c << endl ;
    
    
    // When assigned integer is  out of range of 8 bits or 1 byte
    // then char will hold only last 8 bits of that integer
    
    c = 123456 ; 
    cout << c << endl ;

    i = 'd' ;
    cout << d << endl ;
    

    //Signed and unsigned int
    // How negative numbers are stored and read

    i = 112 ;
    cout << i << endl ;

    i = -112 ;
    cout << i << endl ;
    
    
    unsigned int u = 112 ;
    cout << u << endl ;

    u = -112 ;
    cout << u << endl ;

}