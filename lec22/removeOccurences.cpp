#include <iostream>
using namespace std ;

void removeOccurence( string &s, string part ){

    while( s.length() != 0 && s.find( part ) < s.length() ){
        s.erase( s.find(part), part.length() ) ;
    }

}

int main (){

    string s, part ;
    s = "daabcbaabcbc" ;
    part = "abc" ;

    removeOccurence( s, part ) ;
    cout << s ;

    return 0 ;
}