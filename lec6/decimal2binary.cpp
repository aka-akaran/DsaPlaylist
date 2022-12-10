#include<iostream>
#include<math.h>
using namespace std ;

int decimal2binary(int dec){

    int binary = 0 , i = 0 ;

    while(dec != 0){

        int bit  = dec & 1 ;
        binary += (bit * pow(10, i)) ;
        i++ ;
        dec = dec >> 1 ;

    }
    return binary ;
}


int main(){

    int dec ;
    cout << "Enter the decimal to get the binary value" << endl ;
    cin >> dec ;

    cout << decimal2binary(dec) ;

    return 0 ;
}