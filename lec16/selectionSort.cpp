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

vector <int> selectionSort( vector <int> &v ){

    for ( int i = 0; i<v.size()-1; i++ ){
        int minIndx = i ;
        for ( int j = i+1; j<v.size(); j++ ){
            if( v[j] < v[minIndx]  )
            minIndx = j ;
        }
        swap( v[i], v[minIndx] ) ;
    }

    return v ;
}

int main (){

    int n ;
    vector <int> array ;

    cin >> n ;
    getVectorElements( array, n ) ;
    selectionSort( array ) ;
    printVector( array ) ;

    return 0 ;
}