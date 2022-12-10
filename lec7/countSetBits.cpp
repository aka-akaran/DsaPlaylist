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

    int num;
    cin >> num ;
    cout << decimal2binary(num) << endl ;


    int count = 0 ;

    while (num != 0){

        if ( num & 1)
            count++ ;
        
        num = num >> 1 ;

    }

    cout << count ;

    return 0 ;
}