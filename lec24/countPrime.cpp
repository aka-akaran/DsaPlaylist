#include <iostream>
#include<vector>
using namespace std ;


int countPrimes( int num ){

    int count = 0 ;
    vector <int> a( num, 1) ;

    a[0] = 0 ;
    a[1] = 0 ;

    for ( int i = 2; i<= num; i++ ){

        if ( a[i] ){
            count++ ;

            for ( int j = 2*i; j<=num; j+=i ){
                a[j] = 0 ;
            }
        }

    }
    return count ;
}

int main (){


    int n ;
    cin >> n ;
    int ans = countPrimes( n ) ;
    cout << ans ;


    return 0 ;
}