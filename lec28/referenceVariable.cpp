#include <iostream>
using namespace std ;

int update1( int n ){

    cout << "Pass by Value & Return by Value Function Called" << endl ;
    n++ ;
    return n ;
    
    // Pass by Value & Return by Value
}






int update2( int& n ){

    cout << "Pass by Reference & Return by Value Function Called" << endl ;
    n++ ;
    return n ;
    
    // Pass by Reference & Return by Value

}






int& update3( int n ){

    cout << "Pass by Value & Return by Reference Function Called" << endl ;
    n++ ;
    int num = n ;
    int &ans = num ;
    return ans ;
    
    // Pass by Value & Return by Reference
    // BAD PRACTICE
}






int * func( int n ){
    int *p = &n ;
    return p ;

    // Return By Pointer
    // Bad Practice
}






int main(){

    int i = 5 ;

    // Creating a reference variable

    int &j = i ;

    cout << i << endl ;
    i++ ;
    cout << i << endl ;
    j++ ;
    cout << i << endl ;
    cout << j << endl ;




















    int n = 5 ;

    cout << "Before " << n << endl ;
    func(n) ;
    cout << "After " << n << endl ;

























    return 0 ;
}