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

vector <int> insertionSort( vector <int> &v ){

    for ( int i = 1; i < v.size(); i++ ){
        int temp = v[i] ;
        int j = i-1 ;
        while( j>=0 ){

            if ( v[j] > temp ){
                // shift
                v[j+1] = v[j] ;
            }
            else{
                // stop at this index, otherwise j kept on decrementing ;
                break ;
            }

        j-- ;

        }
        v[j+1] = temp ;
    }

    return v ;
}

int main (){

    int n ;
    vector <int> array ;

    cin >> n ;
    getVectorElements( array, n ) ;
    insertionSort( array ) ;
    printVector( array ) ;

    return 0 ;
}