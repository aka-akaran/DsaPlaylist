#include <iostream>
#include <math.h>
using namespace std ;


int main(){

    int num;
    cin >> num ;
    int complement = 0 , i = 0 ;

    if (num == 0){
        cout << 1 ;
        return 1 ;
    }

    while (num != 0){

        if ( (num & 1) == 0){

            complement += pow(2, i) ; 

        }
        i++ ;
        num = num >> 1 ;

    }
    cout << complement ;




    return 0;
}