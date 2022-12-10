#include <iostream>
using namespace std ;

void print( int arr[], int size ){

    cout << "Size of array is " << size << endl ;

    for ( int i=0; i<size; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

bool linearSearch( int *arr, int size , int key){

    print( arr, size ) ;

    if ( size == 0  ){
        return false ;
    }

    if ( arr[0] == key ){
        return true ;
    }

    else {
        bool remainingPart = linearSearch( arr+1, size-1, key ) ;
        return remainingPart ;
    }
    

}

int main(){

    int arr[10] = {1,2,3,4,15,6,7,8,9,10} ;
    if (linearSearch( arr, 10, 15 )){
        cout << "FOUND " ;
    }
    else{
        "NOT FOUND" ;
    }



    return 0 ;
}