#include <iostream>
using namespace std ;

bool isSorted( int *arr, int size ){

    if ( size == 0 || size ==1 ){
        return true ;
    }

    if ( arr[0] > arr[1] ){
        return false ;
    }

    else {
        bool remainingPart = isSorted( arr+1, size-1 ) ;
        return remainingPart ;
    }
    

}

int main(){

    int arr[10] = {1,2,3,4,15,6,7,8,9,10} ;
    cout << isSorted( arr, 10 ) ; 



    return 0 ;
}