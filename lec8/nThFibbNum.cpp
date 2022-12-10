#include<iostream>
using namespace std ;

int fib( int term){

    int ans ;
    int secondlast = 0 ;
    int last = 1 ;

    switch ( term ){

        case 1 : return secondlast ;

        case 2 : return last ;

        default :
                for ( int i = 3 ; i <= term ; i++ ){
                    ans  = secondlast + last ;
                    secondlast = last ;
                    last = ans ;
                }
                return ans ;
    }
    
}


int main(){

    int n ;
    cin >> n ;

    cout << "fibonacci number is " << fib(n) << endl ;


    return 0 ;
}