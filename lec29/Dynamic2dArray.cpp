#include <iostream>
using namespace std ;

int main(){


    int row, col ;
    cin >> row >> col ;


    // Creating a 2D Array DYNAMICALLY
    int ** arr = new int* [row] ;
    for ( int i=0; i<row; i++ ){
        arr[i] = new int [col] ;
    }


    // Taking Input
    for ( int i=0; i<row; i++ ){
        for ( int j=0; j<col; j++ ){
            cin >> arr[i][j] ;
        }
    }



    // Printing Output
    for ( int i=0; i<row; i++ ){
        for ( int j=0; j<col; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }






























    return 0 ;
}