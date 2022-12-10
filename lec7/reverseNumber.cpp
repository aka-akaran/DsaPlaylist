#include<iostream>
using namespace std ;

int reverseNumber(int num){

    int reverseNum = 0 ;

    while( num != 0){

        int lastDigit = num%10 ;
        reverseNum = reverseNum*10 + lastDigit ;
        num /= 10 ;

    }


    return reverseNum ;
}


int main(){


    int n ;
    cin >> n ;

    cout << reverseNumber(n) ;


    return 0 ;
}