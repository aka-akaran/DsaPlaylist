#include <iostream>
using namespace std ;

void getArrayElements( int a[], int n ){

    for ( int i = 0; i<n; i++ ){
        cin >> a[i] ;
    }

}

void printArray( int arr[], int n ){

    for ( int i=0; i<n; i++ ){
        cout << arr[i] << " " ;
    }

}

void moveZeros( int arr[], int n ){

    // Initialize first non zero indx with 0 ;
    int nonZeroElementIndx = 0 ;
    for ( int i = 0; i<n; i++ ){
        if ( arr[i]!= 0 ){
            swap( arr[nonZeroElementIndx++], arr[i] ) ;
        }
    }

}

int main(){

    int arr[100] ;
    int n ;
    cin >> n ;

    getArrayElements( arr, n ) ;
    moveZeros( arr, n ) ;
    printArray( arr, n ) ;

    return 0 ;
}