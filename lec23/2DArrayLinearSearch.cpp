#include <iostream>
using namespace std ;

bool isPresent( int target, int a[][3], int row, int col ){

    for ( int r = 0; r<row; r++ ){
        for ( int c = 0; c<col; c++ ){
            if ( a[r][c] == target ){
                return 1 ;
            }
        }
    }
    return 0 ;
}

int main(){

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    
    if( isPresent(4, a, 3, 3) ){
        cout << "Present" ;
    }
    else
    {
        cout << "Not Present" ;
    }
    

    return 0 ;
}