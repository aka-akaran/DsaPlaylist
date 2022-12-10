#include<iostream>
#include<math.h>
using namespace std ;

int binary2decimal( int bin){

    int decimal = 0 , i = 0;
    
    while( bin != 0 ){

       int digit = bin % 10 ;
       
       if ( digit == 1)
            decimal += pow(2, i) ;


        bin /= 10 ;
        i++ ;

}

    return decimal ;
}


int main(){

    int binary ;
    cout << "Enter the binary to get the decimal value" << endl ;
    cin >> binary ;

    cout << binary2decimal(binary) ;



    return 0 ;
}