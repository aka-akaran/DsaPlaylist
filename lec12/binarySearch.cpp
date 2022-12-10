#include <iostream>
#include<algorithm>
using namespace std ;

void getArrayElements( int array[], int length ){

    for ( int i = 0; i<length; i++ ){
        cin >> array[i] ;
    }

}

int binarySearch( int array[], int length, int key ){

    // sort( array, array + length ) ;

    int start = 0 ;
    int end = length-1 ;
    int mid ;

    while( start<= end ){

        mid = start + ( end - start )/2 ;

        if ( array[mid] == key ){
            return mid ;
        }

        else if ( array[mid] > key ){
            end = mid-1 ;
        }

        else {
            start = mid+1 ;
        }

    }


    return -1 ;
}

int main (){

    cout << "Enter length, then elements for array in monotonic function, then key" << endl ;

    int a[100] ;
    int l ;
    cin >> l ;
    getArrayElements(a, l) ;

    int key ;
    cin >> key ;

    int index = binarySearch(a, l, key) ;
    cout<< index ;

    return 0 ;
}