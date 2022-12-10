#include <iostream>
using namespace std ;

void swapAlternate(int a[], int length){
    cout << "Swapping Alternate" << endl ;
    for (int i = 0 ; i+1 < length ; i+= 2)
        swap(a[i], a[i+1]) ;

}



void printArr( int arr[], int len){
    cout << "Printing an Array" << endl ;
    for( int i = 0; i<len; i++)
        cout << arr[i] << " " ;
}



void getArrElements( int arr[] , int len){
    cout << "Enter " << len << " elements to input in array" << endl ;
    for (int i = 0 ; i<len ; i++ )
        cin >> arr[i];
}


int main (){

    int arr[4] ;
    int len  = sizeof(arr)/sizeof(int) ;

    getArrElements(arr, len) ;
    swapAlternate(arr, len) ;
    printArr(arr, len) ;

    return 0 ;
}