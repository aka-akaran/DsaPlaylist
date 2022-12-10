#include<iostream>
using namespace std ;

int main(){

    int n, i, sum = 0 ;
    cin >> n ;

    while (i <= n){

        sum += i ;
        i += 2 ;

    }
    cout << sum << endl ;

    return 0 ;

}