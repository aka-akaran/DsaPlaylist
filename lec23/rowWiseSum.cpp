#include <iostream>
using namespace std ;

void rowSum( int *a, int row, int col  ){

    int maxi = 0 ;
    int maxSumRow = -1 ;
    for ( int r = 0; r<row; r++ ){
        int sum = 0 ;
        for ( int c = 0; c<col; c++ ){
            sum += *(a + r*col) + c ;
        }
        cout << sum << " ";
        if ( sum > maxi ){
            maxi = sum ;
            maxSumRow = r ;
        }
    }
    cout << endl ;
    cout << "Max Sum Row = " << maxSumRow << endl ;

}

int main (){

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    
    rowSum( *a, 3, 3 ) ;

    return 0 ;
}