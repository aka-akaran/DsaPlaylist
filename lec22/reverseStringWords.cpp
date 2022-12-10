#include <iostream>
#include <vector>
using namespace std ;

void reverse( vector <char> &ch, int s, int e ){

    while ( s<e ){
        swap( ch[s++], ch[e--] ) ;
    }

}

void PrintCharVector( vector <char> ch, int s, int e ){

    for ( int i = s; i <= e; i++ ){
        cout << ch[i] << " " ;
    }

}

void reverseStringWords( vector <char> &s ){

    int start = 0 ;
    int end = s.size()-1 ;

    reverse( s, start, end ) ;

    int countSpaces = 0 ;

    for ( int i = 0; i<s.size(); i++ ){
        if( s[i] == ' ' ){
            countSpaces++ ;
        }
    }
    int totalWords = countSpaces + 1 ;

    start = end = 0 ;
    while( totalWords > 0 ){
        int i = start ;
        while(s[i] != ' ' && i < s.size()){
            i++ ;
        }
        end = i-1 ;
        reverse( s, start, end ) ;
        start = i+1 ;
        totalWords-- ;

    }

}

int main(){

    vector <char> ch = { 't', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e' } ;

    // reverse( ch, 0, ch.size()-1 ) ;
    // PrintCharVector( ch, 0, ch.size()-1 ) ;

    reverseStringWords( ch ) ;
    PrintCharVector( ch, 0, ch.size()-1 ) ;


    return 0 ;
}