#include <iostream>
using namespace std ;


inline int getMax( int a, int b ){
    // NOTE : While calling this function, this is called as inline function
    return  ( a>b ) ? a : b ;
}

void func( int a, int b ){

    // NOTE : Here when we call this function extraa memory is created
    // and function call is done
    a++ ;
    b++ ;
    cout << a << b << endl ;
}

int main (){

    int a = 1, b= 2 ;
    func( a, b ) ;

    cout << getMax( 2, 3 ) ;

    return 0 ;
}

// Inline Function : replace the function with it's values before compilation