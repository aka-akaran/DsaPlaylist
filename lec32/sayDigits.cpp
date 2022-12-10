#include<iostream>
using namespace std ;

void sayDigit( int n, string arr[] ){

    // base case
    if( n==0 ){
        return ;
    }

    // recursive Call
    sayDigit( n/10, arr ) ;

    // Processing
    cout << arr[n%10] << " "  ;



}

int main(){

    string arr[10] = {  "zero", 
                        "one", "two", "three",
                        "four", "five", "six",
                        "seven", "eight", "nine" } ;

    int n ;
    cin >> n ;
    sayDigit( n, arr ) ;


    return 0 ;
}