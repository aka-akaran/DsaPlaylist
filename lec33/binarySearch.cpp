#include <iostream>
using namespace std ;

void print( int arr[], int size ){

    cout << "Size of array is " << size << endl ;

    for ( int i=0; i<size; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int binarySearch( int *arr, int start, int end , int key){

    // print( arr, size ) ;

    if ( start > end  ){
        return -1 ;
    }
    
    int mid = start + (end-start)/2 ;

    if ( arr[mid] == key ){
        return mid ;
    }

    else if ( arr[mid] > key ) {
        return binarySearch( arr, start, mid-1, key ) ;
    }

    else {
        return binarySearch( arr, mid+1, end, key ) ;
    }
    

}

int main(){

    int arr[10] = {1,2,3,4,15,6,7,8,9,10} ;
    int start = 0 ;
    int end = 9 ;
    int key = 15 ;


    cout << binarySearch( arr, start, end, key ) ;



    return 0 ;
}