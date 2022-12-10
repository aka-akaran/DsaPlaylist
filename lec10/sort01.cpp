#include <iostream>
#include <algorithm>
using namespace std ;

void getArrayElements( int arr[], int length){

    for ( int i = 0 ; i < length ; i++){
        cin >> arr[i] ;
    }

}

void sort01TwoPointer( int arr[] ,int length){

    int start = 0 ;
    int end = length -1 ;

    while (start < end){

        while ( arr[start] == 0 && start < end){
            start++ ;
        }

        while ( arr[end] == 1 && start < end){
            end-- ;
        }
//        cout << arr[start] << " " << arr[end] << endl ;
//      if reaches here means arr[start] == 1 and arr[end] == 0
//      or may be they get out of the range i.e. start == end ;
        swap( arr[start], arr[end] ) ;
    }

}

void sort01Inbuit( int arr[], int length){
    sort(arr, arr+length) ;
}

void sort01Counting( int arr[], int length){

    int count = 0 ;
    for (int i = 0; i<length; i++){
        if (arr[i] == 0){
            count++ ;
        }
    }

    for ( int i = 0; i<count; i++){
        arr[i] = 0 ;
    }
    for (int i = count; i< length ; i++){
        arr[i] = 1 ;
    }

}

void printArray( int arr[], int length){

    for (int i = 0 ; i < length; i++) {
        cout << arr[i] << " " ;
    }

}

int main (){

    int l ;
    cin >> l ;
    int a[100] ;

    getArrayElements(a, l) ;
    //sort01TwoPointer(a, l) ;
    //sort01Inbuit(a, l) ;
    sort01Counting(a, l) ;
    printArray(a, l) ;

    return 0 ;
}