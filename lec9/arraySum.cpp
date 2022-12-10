#include<iostream>
using namespace std ;


void getArrElements( int arr[] , int len){
    cout << "Enter " << len << " elements to input in array" << endl ;
    for (int i = 0 ; i<len ; i++ )
        cin >> arr[i];
}



int arraysum( int arr[] , int len){
    
    int sum = 0 ;
    for (int i = 0 ; i<len ; i++ )
        sum += arr[i];

    return sum ;
}




int main(){

    int myarray[10];
    int l = 10 ;

    getArrElements(myarray, l);
    cout << arraysum(myarray, l) ;





    return 0 ;
}