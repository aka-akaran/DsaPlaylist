#include <iostream>
using namespace std ;

int climbStairs( int n ){

    if( n<0 ){
        return 0 ;
    }

    if( n == 0 ){
        return 1 ;
    }

    int stepbefore = climbStairs( n-1 ) ;
    int stepBeforeBefore = climbStairs(n-2)  ;

    // We reach at nth stair from stari (n-1) or stair (n-1)
    int ans = stepbefore + stepBeforeBefore ;
    return ans ;

}

int main(){

    int n ;
    cin >> n ;
    int ans = climbStairs(n) ;
    cout << ans ;



    return 0 ;
}