#include<iostream>
using namespace std ;

void reverseS( string &s, int start, int end ){

    if ( start >= end ){
        return ;
    }

    swap( s[start++], s[end--] ) ;
    reverseS ( s, start, end ) ;

}

int main(){

    string s ;
    cin >> s ;

    int start = 0 ;
    int end = s.length() - 1 ;

    reverseS( s, start, end ) ;

    cout << s ;


    return 0 ;
}