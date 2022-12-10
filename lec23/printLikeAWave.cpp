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

vector<int> printLikeAWave( vector< vector< int > > arr, int rows, int cols ){

    vector <int> ans ;

    for ( int c = 0; c<cols; c++ ){

        if(c&1){
            for ( int r = rows-1; r>=0; r-- ){
                ans.push_back( arr[r][c] ) ;
            }
        }

        else{
            for ( int r = 0; r<rows; r++ ){
                ans.push_back( arr[r][c] ) ;
            }
        }

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
    vector <int> ans = printLikeAWave( arr, rows, cols ) ;
    printVector( ans ) ;

    return 0 ;
}