#include <iostream>
using namespace std ;

void colSum( int *a, int row, int col  ){

    for ( int c = 0; c<col; c++ ){
        int sum = 0 ;
        for ( int r = 0; r<row; r++ ){
            sum += *(a + r*col) + c ;
        }
        cout << sum << " ";
    }

}

int main (){

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    
    colSum( *a, 3, 3 ) ;

    return 0 ;
}