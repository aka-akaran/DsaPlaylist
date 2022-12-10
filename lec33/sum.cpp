#include <iostream>
using namespace std ;

void print( int arr[], int size ){

    cout << "Size of array is " << size << endl ;

    for ( int i=0; i<size; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int getSum( int *arr, int size ){

    // print( arr, size ) ;



    // Base Case
    if ( size == 0  ){
        return 0 ;
    }

    if ( size == 1 ){
        return arr[0] ;
    }

    else {
        int remainingPart = getSum( arr+1, size-1) ;
        return remainingPart + arr[0] ;
    }

}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    cout << getSum( arr, 10 ) ;




    return 0 ;
}