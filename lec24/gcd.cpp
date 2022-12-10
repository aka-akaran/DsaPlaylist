#include<iostream>
using namespace std ;

int gcd_a( int a, int b ){

    int ans ;

    if ( a == 0 ){
        return b ;
    }

    if ( b == 0 ){
        return a ;
    }

    while( a!=b ){

        if ( a>b ){
            a = a-b ;
        }

        else {
            b = b-a ;
        }

    }

    return a ;
}


int gcd_b( int a, int b ){

    int ans ;

    if ( a == 0 ){
        return b ;
    }

    if ( b == 0 ){
        return a ;
    }

    while( b%a ){

        a = b%a ;
        b = a ;

    }

    return b ;
}

int main(){

    int a, b ;
    cin >> a >> b ;

    int ans = gcd_b( a, b ) ;
    cout << ans ;

    return 0 ;
}