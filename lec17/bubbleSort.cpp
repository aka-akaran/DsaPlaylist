#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int n ){

    for ( int i = 0; i<n; i++ ){
        int element ;
        cin >> element ;
        v.push_back(element) ;
    }

}

void printVector( vector <int> v ){

    for ( int i : v ){
        cout << i << " " ;
    }

}

vector <int> bubbleSort( vector <int> &v ){

    for (int i = 1; i< v.size(); i++){
        // for round 1 to n-1
        bool swapped = false ;

        for ( int j = 0; j<v.size()-i; j++ ){
            if( v[j]> v[j+1] ){
                swap ( v[j], v[j+1] ) ;
                swapped = false ;
            }
        }
        if ( swapped = false ){
            // if in previous round no swap, means already sorted ;
            break ;
        }
    }

    return v ;
}

int main (){

    int n ;
    vector <int> array ;

    cin >> n ;
    getVectorElements( array, n ) ;
    bubbleSort( array ) ;
    printVector( array ) ;

    return 0 ;
}