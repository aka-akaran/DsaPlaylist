#include <iostream>
#include<algorithm>
using namespace std ;

void getArrayElements( int array[], int length ){

    for ( int i = 0; i<length; i++ ){
        cin >> array[i] ;
    }

}

int firstOccurence( int array[], int length, int key ){

    // sort( array, array + length ) ;

    int start = 0 ;
    int end = length-1 ;
    int mid ;

    int ans = -1 ;


    while( start<= end ){

        mid = start + ( end - start )/2 ;

        if ( array[mid] == key ){
            ans = mid ;
            end = mid-1 ;
        }

        else if ( array[mid] > key ){
            end = mid-1 ;
        }

        else {
            start = mid+1 ;
        }

    }


    return ans ;
}

int lastOccurence( int array[], int length, int key ){

    // sort( array, array + length ) ;

    int start = 0 ;
    int end = length-1 ;
    int mid ;

    int ans = -1 ;

    while( start<= end ){

        mid = start + ( end - start )/2 ;

        if ( array[mid] == key ){
            ans = mid ;
            start = mid+1 ;
        }

        else if ( array[mid] > key ){
            end = mid-1 ;
        }

        else {
            start = mid+1 ;
        }

    }

    return ans ;
}

int main (){

    cout << "Enter length, then elements for array in monotonic function, then key" << endl ;

    int a[100] ;
    int l ;
    cin >> l ;
    getArrayElements(a, l) ;

    int key ;
    cin >> key ;

    pair< int, int > p ;

    p.first = firstOccurence(a, l, key) ;
    p.second = lastOccurence(a, l, key) ;

    int totalOccurence = (p.second - p.first) + 1 ;

    cout<< p.first << " "<< p.second << endl ;
    cout << "Total Occurence are " << totalOccurence ;

    return 0 ;
}