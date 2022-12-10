#include <iostream>
using namespace std ;

bool isPresent( int target, int a[][3], int row, int col ){

    int total = row*col -1 ;

    int start = 0 ;
    int end = row*col - 1 ;

    while( start <= end ){
        int mid = start + ( end - start )/2 ;
        int r = mid/col ;
        int c = mid % col ;

        if ( a[r][c] == target ){
            cout << "Found at (" << r << "," << c << ")" << endl ;
            return true ;
        }

        else if ( a[r][c] > target ){
            end = mid - 1 ;
        }

        else {
            start = mid + 1 ;
        }
    }

    return false ;

}

int main(){

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    
    if( isPresent(1, a, 3, 3) ){
        cout << "Present" ;
    }
    else
    {
        cout << "Not Present" ;
    }
    

    return 0 ;
}

// NOTE : Integers in each row are sorted from left to right
// The first integer of each row is greater than the last integer
// of the previous row