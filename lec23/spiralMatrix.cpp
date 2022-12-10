#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector< vector< int > > &arr, int rows, int cols ){

    for ( int r = 0; r < rows; r++ ){
        vector <int> temp ;
        for ( int c = 0; c < cols; c++ ){
            int element ;
            cin >> element ;
            temp.push_back( element ) ;

        }
        arr.push_back( temp ) ;
    }

}

vector<int> spiralMatrix( vector< vector< int > > arr, int rows, int cols ){

    vector <int> ans ;
    int count = 0 ;
    int totalElements = rows*cols - 1 ;

    int startRow = 0 ;
    int endRow = rows-1 ;
    int colStart = 0 ;
    int colEnd = cols - 1 ;

    while ( count <= totalElements ){

        // Printing first row
        for ( int c = colStart; count<= totalElements && c<= colEnd; c++ ){
            ans.push_back( arr[startRow][c] ) ;
            count++ ;
        }
        startRow++ ;

        // Printing last col
        for ( int r = startRow; count<= totalElements && r<= endRow; r++ ){
            ans.push_back( arr[r][colEnd] ) ;
            count++ ;
        }
        colEnd-- ;

        // Printing last row
        for ( int c = colEnd; count<= totalElements && c>= colStart ; c-- ){
            ans.push_back( arr[endRow][c] ) ;
            count++ ;
        }
        endRow-- ;

        // Printing first col
        for ( int r = endRow; count<= totalElements && r>= startRow; r-- ){
            ans.push_back( arr[r][colStart] ) ;
            count++ ;
        }
        colStart++ ;

    }


    return ans ;
}

void printVector( vector<int> a ){

    int n = a.size() ;
    for ( int i = 0; i<n; i++ ){
        cout << a[i] << " " ;
    }

}

int main(){

    vector< vector< int > > arr ;
    int rows, cols ;
    cin >> rows ;
    cin >> cols ;
    getVectorElements( arr, rows, cols ) ;
    vector <int> ans = spiralMatrix( arr, rows, cols ) ;
    printVector( ans ) ;

    return 0 ;
}