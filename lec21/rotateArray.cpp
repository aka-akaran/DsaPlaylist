#include <iostream>
using namespace std ;

void getArrayElements( int array[], int n ){

    for ( int i = 0; i<n; i++ ){
        cin >> array[i] ;
    }

}

void printArray( int array[], int n ){

    for ( int i = 0; i<n; i++ ){
        cout << array[i] << " " ;
    }

}

void rotateArray( int array[], int n, int pos ){

    int temp[100] = {0} ;
    for ( int i = 0; i<n; i++ ){
        temp[ ( i+pos )%n ] = array[i] ;
    }

    for ( int i = 0; i<n; i++ ){
        array[i] = temp[i] ;
    }

}

int main(){

    int a[100];
    int n ;
    int pos ;
    cout << "Enter length of array and pos by which array is rotated then array elements" << endl ;
    cin >> n >> pos ;

    getArrayElements( a, n ) ;
    rotateArray( a, n, pos) ;
    printArray( a, n ) ;

    return 0 ;
}