#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <char> &chars, int n ){
    char element ;
    for ( int i = 0; i<n; i++ ){
        cin >> element ;
        chars.push_back( element ) ;
    }
}

void printVector( vector <char> chars ){
    for ( char ch : chars ){
        cout << ch << " " ;
    }
    cout << endl ;
}

int compress( vector <char> &chars ){

    int i = 0 ;
    int n = chars.size() ;
    int ansIndx = 0 ;

    while( i<n ){

        int j = i+1 ;
        while ( j<n && chars[i] == chars[j] ){
            j++ ;
        }
        int count = j-i ;
        chars[ansIndx++] = chars[i] ;

        if ( count > 1 ){
            string cnt = to_string( count ) ;
            for ( char ch : cnt ){
                chars[ansIndx++] = ch ;
            }

        }
        i = j ;

    }
    return ansIndx ;
}



int main(){
    vector <char> chars ;
    int n ;
    cin >> n ;
    getVectorElements( chars, n ) ;
    cout << compress( chars ) << endl ;
    printVector( chars ) ;
    cout << chars.size() << endl ;


    return 0 ;
}

// Size of array is different and size of array which
// contain ans is different .