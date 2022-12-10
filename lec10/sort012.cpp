#include <iostream>
#include <algorithm>
using namespace std ;

void getArrayElements( int arr[], int length){

    for ( int i = 0 ; i < length ; i++){
        cin >> arr[i] ;
    }

}

void printArray( int arr[], int length){

    for (int i = 0 ; i < length; i++) {
        cout << arr[i] << " " ;
    }

}

void sort012ThreePointer( int arr[] ,int length){

    int low = 0 ;
    int mid = 0 ;
    int high = length - 1 ;

    while ( mid <= high ){

        switch ( arr[mid] ) {

            case 0 :    swap ( arr[low++], arr[mid++] ) ;
                        break ;

            case 1 :    mid++ ;
                        break ;

            case 2 :    swap ( arr[mid], arr[high--]) ;
                        break ;

        }

    }

}



void sort012Inbuit( int arr[], int length){
    sort(arr, arr+length) ;
}

void sort012Counting( int arr[], int length){

    int count0 = 0 ;
    int count1 = 0 ;
    int count2 = 0 ;

    for (int i = 0; i<length; i++){
        switch (arr[i]) {

            case 0 :    count0++ ;
                        break ;

            case 1 :    count1++ ;
                        break ;

            case 2 :    count2++ ;
                        break ;
        }
    }

    for ( int i = 0; i<count0; i++){
        arr[i] = 0 ;
    }
    for (int i = count0; i< count0 + count1 ; i++){
        arr[i] = 1 ;
    }
    for (int i = count0 + count1; i<length ; i++){
        arr[i] = 2 ;
    }

}



int main (){

    int l ;
    cin >> l ;
    int a[100] ;

    getArrayElements(a, l) ;
    sort012ThreePointer(a, l) ;
    //sort012Inbuit(a, l) ;
    //sort012Counting(a, l) ;
    printArray(a, l) ;

    return 0 ;
}

// we have three ranges 
// 0 - low = 0's ;
// low - mid = 1's ;
// mid - high = unknown ;
// high - (length-1)  = 2's ;

// we will traverse the loop till we reduce the unknown 
// range to 0 ;

// in case 2 we didn't increase mid because after swapping
// mid value and high value we don't know which element
// is going to be at mid positiion

// when we encounter 0, we throw it in 0's range
// when we encounter 1, we don't do anything
// when we encounter 2, we through it in 2's range