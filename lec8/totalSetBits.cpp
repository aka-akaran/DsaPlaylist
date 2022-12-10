#include<iostream>
using namespace std ;

int setBits( int number){

    int n = number ;
    int count = 0 ;

    while (n != 0){
        if (n & 1)
            count++ ;
        n = n >> 1 ;
        }

    return count ;
}

int main(){

    int a, b ;
    cin >> a >> b ;

    cout << setBits(a) + setBits(b) ;

    return 0 ;
}