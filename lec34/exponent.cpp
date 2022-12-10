#include <iostream>
using namespace std ;

int power( int a, int b ){

    int ans ;
    if ( b == 0 ){
        return 1 ;
    }

    if ( b== 1 ){
        return a ;
    }

    int subproblem = power( a, b/2 ) ;
    
    if ( b&1 ){
        ans = a*subproblem*subproblem ;
    }
    else {
        ans = subproblem*subproblem ;
    }


    return ans ;
}

int main(){

    int a, b ;
    cin >> a >> b ;

    cout << power( a, b ) ;


    return 0 ;
}