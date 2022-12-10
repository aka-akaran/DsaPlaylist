#include <iostream>
using namespace std ;

void bubbleSort( int *arr, int size ){

    // base Case - Already Sorted
    if( size == 0 || size == 1 ){
        return ;
    }

    // Processing - put largest element in end
    for ( int i =0; i<size-1; i++ ){
        if( arr[i] > arr[i+1] ){
            swap ( arr[i], arr[i+1] ) ;
        }
    }

    // recursive call - for size decreased by 1
    bubbleSort( arr, size-1 ) ;

}

int main(){

    int arr[5] = {222, 5 ,35 ,61 ,100} ;
    int n = 5 ;
    bubbleSort( arr, n ) ;

    for ( int i = 0; i<n; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
    


    return 0 ;
}