#include <iostream>
using namespace std ;

int getSum( int arr[], int n ){

    int sum = 0 ;
    for ( int i = 0; i<n; i++ ){
        sum += arr[i] ;
    }
    return sum ;
}

int main(){

    int n ;
    cin >> n ;

    // Variable Size Array
    int* arr = new int[n] ;

    // Taking Input
    for ( int i = 0; i<n; i++){
        cin >> arr[i] ;
    }

    int ans = getSum( arr, n ) ;

    cout << "Ans is " << ans << endl ;


    // Deleting Dynamic Array memory from Heap
    delete arr ;



























    // BAD PRACTICE

/*


    while ( true ){
        int* p = new int ;
    }



*/























    return 0 ;
}