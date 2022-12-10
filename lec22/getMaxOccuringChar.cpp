#include <iostream>
using namespace std ;

char getMaxOccChar( string s ){

    char ans ;

    char arr[26] = {0} ;
    int charIndx = 0 ;

    for ( int i = 0; i< s.length(); i++){

        char currentChar = s[i] ;

        if( currentChar >= 'a' && currentChar <= 'z' ){
            charIndx = currentChar - 'a' ;
        }

        if ( currentChar >= 'A' && currentChar <= 'Z' ){
            charIndx = currentChar - 'A' ;
        }
        arr[charIndx]++ ;

    }

    int maxi = -1, maxiIndx = 0 ;
    for ( int i = 0; i<26; i++ ){
        if( arr[i] > maxi ){
            maxiIndx = i ;
            maxi = arr[maxiIndx] ;
        }
    }

    return 'a' + maxiIndx ;

}

int main(){

    string s ;
    s = "smith" ;

    char ans = getMaxOccChar( s ) ;
    cout << ans ;

    return 0 ;
}