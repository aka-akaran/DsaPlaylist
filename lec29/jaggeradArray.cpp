#include <iostream>
using namespace std ;

int main(){


    int row, col ;
    cin >> row ;


    int * colCount = new int[row] ;


    // Creating a 2D Array DYNAMICALLY
    int ** arr = new int* [row] ;
    for ( int i=0; i<row; i++ ){
        cin >> col ;
        colCount[i] = col ;
        arr[i] = new int [col] ;
    }


    // Taking Input
    for ( int i=0; i<row; i++ ){
        for ( int j=0; j<colCount[i]; j++ ){
            cin >> arr[i][j] ;
        }
    }



    // Printing Output
    cout << endl ;
    for ( int i=0; i<row; i++ ){
        for ( int j=0; j<colCount[i]; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }

    for ( int i=0; i<row; i++ ){
        delete [] arr[i] ;
    }

    delete []arr ;
    delete []colCount ;






























    return 0 ;
}