#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int n ){
    
    for ( int i = 0; i<n; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

void printVectorElements( vector <int> v ){

    for ( int i = 0; i<v.size(); i++ ){
        cout << v[i] << " " ;
    }

}

void reverseVectorAfterIndx( vector <int> &v, int i ){

    int start = i+1 ;
    int end = v.size()-1 ;

    while ( start < end ){
        swap( v[start++], v[end--] ) ;
    }

}


int main (){
    

    int n, i ;
    cin >> n >> i ;
    vector <int> list ;
    getVectorElements( list, n) ;
    reverseVectorAfterIndx( list, i ) ;
    printVectorElements( list ) ;


    return 0 ;
}