#include <iostream>
using namespace std ;

bool isPresent( int target, int a[][5], int row, int col ){

    int total = row*col -1 ;

    int r = 0 ;
    int c = col - 1 ;

    while( r<row && c>=0 ){

        cout << a[r][c] ;

        if ( a[r][c] == target ){
            cout << "Found at (" << r << "," << c << ")" << endl ;
            return true ;
        }

        else if ( a[r][c] > target ){
            c-- ;
        }
        
        else {
            r++ ;
        }

    }
    return false ;
}

int main(){

    int a[3][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22} ;
    
    if( isPresent(9, a, 3, 5) ){
        cout << "Present" ;
    }
    else
    {
        cout << "Not Present" ;
    }
    

    return 0 ;
}

// NOTE : Integers in each row are sorted from left to right
// Integers in each col are sorted in ascending from top to bottom