#include <iostream>
using namespace std ;

int modularExpo( int x, int power, int modulo ){

    int ans = 1 ;

    while ( power > 0 ){

        // set bit of power is 1 
        if( power & 1 ){
            ans = ((ans%modulo) * (x%modulo)) % modulo ;
        }
        x = ((x%modulo) * (x%modulo)) % modulo ;
        power = power >> 1 ;

    }
    return ans ;
}

int regularExpo( int x, int power, int modulo ){

    int ans = 1 ;

    while ( power > 0 ){

        // set bit of power is 1 
        if( power & 1 ){
            ans = ans*x ;
        }
        x = x*x ;
        power = power >> 1 ;

    }
    return ans ;
}

int main(){

    int x, power ;
    int modulo = 1000 ;

    cin >> x >> power ;

    int ans = modularExpo( x, power, modulo ) ;
    cout << ans ;

    return 0 ;
}


// https://www.youtube.com/watch?v=HN7ey_-A7o4