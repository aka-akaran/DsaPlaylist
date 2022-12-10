#include <iostream>
using namespace std ;

void getArrayElements( int array[], int length ){

    for ( int i = 0; i<length; i++ ){
        cin >> array[i] ;
    }

}

bool checkIfRotated( int array[], int length ){

    int count = 0 ;
    for ( int i = 0; i<length-1; i++ ){
        if ( array[i] > array[i+1] ){
            count++ ;
        }
    }
    if ( array[length-1] > array[0] ){
        count++ ;
    }

    return count<=1 ;
}

int main(){

    int a[100] = {0} ;
    int n ;
    cin >> n ;

    getArrayElements( a, n ) ;
    bool ans = checkIfRotated( a, n ) ;

    if ( ans == true ){
        cout << "Array Rotated" ;
    }
    else{
        cout << "Array Not Rotated" ;
    }

    return 0 ;
}