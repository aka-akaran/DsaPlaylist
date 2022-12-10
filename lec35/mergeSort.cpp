#include<iostream>
using namespace std ;

void merge( int *arr, int s, int e ){

    int mid = s + (e-s)/2 ;

    int length1 = mid - s + 1 ;
    int length2 = e - mid ;

    int *first = new int[length1] ;
    int *second = new int[length2] ;


    // copy values
    int mainArrayIndex = s ;
    for ( int i = 0; i< length1; i++ ){
        first[i] = arr[mainArrayIndex++] ;
    }

    mainArrayIndex = mid+1 ;
    for ( int i = 0; i< length2; i++ ){
        second[i] = arr[mainArrayIndex++] ;
    }

    // Merge 2 sorted Arrays

    int index1 = 0 ;
    int index2 = 0 ;
    mainArrayIndex = s ;

    while ( index1 < length1 && index2 < length2 ){
        if ( first[index1] <second[index2] ){
            arr[mainArrayIndex++] = first[index1++] ;
        }
        else {
            arr[mainArrayIndex++] = second[index2++] ;
        }
    }

    while ( index1 < length1 ){
        arr[mainArrayIndex++] = first[index1++] ;
    }

    while ( index2 < length2 ){
        arr[mainArrayIndex++] = second[index2++] ;
    }



}

void mergeSort( int *arr, int s, int e ){

    //Base Case
    if ( s>= e ){
        return ;
    }

    int mid = s + (e-s)/2 ;

    // recursion call
    mergeSort( arr, s, mid ) ;
    mergeSort( arr, mid+1, e ) ;

    // processing 
    merge( arr, s, e ) ;

}

int main(){

    int arr[5] = {222, 5 ,35 ,61 ,100} ;
    int n = 5 ;
    mergeSort( arr, 0, n-1 ) ;

    for ( int i = 0; i<n; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;


    return 0 ;
}