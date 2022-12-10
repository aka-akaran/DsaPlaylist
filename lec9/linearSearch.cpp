#include<iostream>
using namespace std ;


void getArrElements( int arr[] , int len){
    cout << "Enter " << len << " elements to input in array" << endl ;
    for (int i = 0 ; i<len ; i++ )
        cin >> arr[i];
}



bool search( int arr[] , int len, int key){
    
    for (int i = 0 ; i<len ; i++ ){
        if (arr[i] == key){
            return 1 ;
        }
    }

    return 0 ;
}




int main(){

    int myarray[6];
    int l = sizeof(myarray)/ sizeof(int) ;
    int element = 10 ;

    getArrElements(myarray, l);

    bool found = search(myarray, l, element) ;

    if(found)
        cout << "Found" ;
    else
        cout << "Not Found" ;


    return 0 ;
}