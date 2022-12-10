#include <iostream>
using namespace std ;

long long int sqrt( int x){


    int start = 0 ;
    int end = x ;
    long long int ans = -1 ;

    while ( start <= end ) {

        long long int mid = start + ( end-start )/2 ;
        long long int square = mid*mid ;

        if ( square == x ){
            return mid ;
        }

        else if ( square < x ){
            ans = mid ;
            start = mid + 1 ;
        }

        else {
            end = mid - 1 ;
        }

    }


    return ans ;
}

double morePrecision( int x, int precision, int intsol ){

    double factor = 1 ;
    double ans = intsol ;
    for ( int i = 0; i<precision; i++ ){
        factor /= 10 ;
        for ( double j = ans; j*j < x; j = j + factor ){
            ans = j ;
        }
    }
    return ans ;
}

int main (){

    int x ;
    cin >> x ;

    double ans = morePrecision( x, 3, sqrt(x) ) ;
    cout << ans ;

    return 0 ;
}