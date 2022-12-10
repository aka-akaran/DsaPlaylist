#include<iostream>
using namespace std ;


void getArrElements( int arr[] , int len){
    cout << "Enter " << len << " elements to input in array" << endl ;
    for (int i = 0 ; i<len ; i++ )
        cin >> arr[i];
}

void printArr( int arr[], int len){
    cout << "Printing after reversing" << endl ;
    for( int i = 0; i<len; i++)
        cout << arr[i] << " " ;
}

void myswap( int &num1, int &num2){
    
    int temp ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;

}

void reverse( int array[], int length ){

    int start = 0 ;
    int end = length-1 ;

    while( start<end ){
        myswap(array[start], array[end]) ;
        start++ ;
        end-- ;
    }


}

int main(){


    int myarray[5];
    int l = sizeof(myarray)/ sizeof(int) ;
    int element = 10 ;

    getArrElements(myarray, l);

    reverse(myarray, l) ;

    printArr(myarray, l) ;






    return 0 ;
}