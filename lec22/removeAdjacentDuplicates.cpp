#include <iostream>
#include <math.h>
using namespace std ;

string removeAdjacentDuplicates( string &s ){

    if ( s.length() >= pow( 10,5 ) ){
        return "" ;
    }

    int currIndx = 0 ;

    while( currIndx < s.length()-1 &&  s.length() >=2){
        if ( s[currIndx] == s[currIndx+1] ){
            s.erase( s.begin() + currIndx ) ;
            s.erase( s.begin() + currIndx ) ;
            if ( currIndx > 0 ){
                currIndx -= 1 ;
            }
            else {
                currIndx = 0 ;
            }
        }
        else {
            currIndx++ ;
        }
    }

    return s ;
}

int main(){

    string s ;
    cin >> s ;
    removeAdjacentDuplicates( s ) ;
        cout << s ;

    return 0 ;
}