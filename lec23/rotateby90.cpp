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

void rotateby90( vector< vector< int > > &arr, int rows, int cols ){

    vector <int> ans ;

    // Transpose of matrix
    for ( int r = 0; r< rows; r++ ){
        for ( int c = r; c<cols; c++ ){
            swap( arr[r][c], arr[c][r] ) ;
        }
    }

    // Mirror image of the transpose matrix
    for ( int r = 0; r< rows; r++ ){
        int start = 0 ;
        int end = cols-1 ;

        while ( start < end ){
            swap ( arr[r][start++], arr[r][end--] ) ;
        }
    }

}

void printVector( vector<vector<int>> a ){

    int n = a.size() ;
    for ( vector<int> i: a ){
        for ( int j : i ){
            cout << j << " " ;
        }
        cout << endl;
    }
}

int main(){

    vector< vector< int > > arr ;
    getVectorElements( arr, 3, 3 ) ;
    rotateby90( arr, 3, 3 ) ;
    printVector( arr ) ;


    return 0 ;
}