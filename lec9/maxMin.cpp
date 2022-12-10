#include<iostream>
//#include<array>
using namespace std ;



int getmax( int a[] , int len){
    
    cout << "Maximum in an Array is " ;


    int maxi = INT_MIN ;
    for (int i  = 0 ; i < len ; i++){
        //cout << a[i] << endl ;
        maxi = max(maxi, a[i]) ;
    }
    return maxi ;
}



int getmin( int a[] , int len){

    cout << "Minimun in an Array is "  ;

    int mini = INT_MAX ;
    for (int i  = 0 ; i < len ; i++){
        mini = min(mini, a[i]) ;
    }
    return mini ;
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

int main(){

/*
    char ch[10] = {'a', 'b'} ;
    for (int i  = 0 ; i < 10 ; i++)
        cout << ch[i] ;

*/

    int num[10] ;
    int l = 10 ;

    getArrElements(num, l) ;
    cout << getmax(num, l) << endl;
    cout << getmin(num, l) << endl;
    printArr(num, l) ;




    return 0 ;
}