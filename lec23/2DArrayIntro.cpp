#include <iostream>
using namespace std ;

void getInputRowise( int a[][4], int row, int col ){

    cout << "enter elements for array" << endl ;
    for( int r = 0; r<row; r++ ){
        for ( int c = 0; c<col; c++ ){
            cin >> a[r][c] ;
        }
    }
}


void getArrayColwise( int a[][4], int row, int col ){

    cout << "enter elements for array" << endl ;
    for( int c = 0; c<col; c++ ){
        for ( int r = 0; r<row; r++ ){
            cin >> a[r][c] ;
        }
    }
}


void printingArrayRowise( int a[][4], int row, int col ){

    for( int r = 0; r<row; r++ ){
        for ( int c = 0; c<col; c++ ){
            cout << a[r][c] << "\t" ;
        }
        cout << endl ;
    }
    cout << endl ;

}



void printingArrayColwise( int a[][4], int row, int col ){

    for( int c = 0; c<col; c++ ){
        for ( int r = 0; r<row; r++ ){
            cout << a[r][c] << "\t" ;
        }
        cout << endl ;
    }
    cout << endl ;

}

// In this method we are passing an array with one pointer
// and calculating the address of (i, j) as (base address + i*col) + j
// and the derefrencing it

void par( int *a, int row, int col ){

    for( int r = 0; r<row; r++ ){
        for ( int c = 0; c<col; c++ ){
            cout << (*(a + r*col) + c) << "\t" ;
        }
        cout << endl ;
    }
    cout << endl ;

}

void pac( int *a, int row, int col ){

    for( int c = 0; c<col; c++ ){
        for ( int r = 0; r<row; r++ ){
            cout << (*(a + r*col) + c) << "\t" ;
        }
        cout << endl ;
    }
    cout << endl ;

}

int main(){

    // Decleration

    int a[3][4] ;


    int b[][4] = { {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12} } ;


    int c[][4] = {1,2,3,4,5,6,7,8,9,10,11,12} ;



    // taking the input
    
    getInputRowise( a, 3, 4 ) ;

    // Printing the 2D Array
    cout << "Printing 2d Array A Rowise" << endl ; 
    printingArrayRowise( a, 3, 4 ) ;

    cout << "Printing 2d Array A Colwise" << endl ; 
    printingArrayColwise( a, 3, 4 ) ;


    // Here we are printing the array with pointer
    pac( a[0], 3, 4 ) ;

    




    return 0 ;
}