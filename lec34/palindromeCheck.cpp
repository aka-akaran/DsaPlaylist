#include <iostream>
using namespace std ;

bool checkPalindrome( string s, int start, int end ){

    // Base Case
    if ( start >= end ){
        return true ;
    }

    if ( s[start] != s[end] ){
        return false ;
    }
    else {
        bool substring = checkPalindrome( s, ++start, --end ) ;
        return substring ;
    }

}

int main(){

    string s ;
    cin >> s ;

    int start = 0 ;
    int end = s.length()-1 ;

    bool ans = checkPalindrome( s, start, end ) ;

    if( ans ){
        cout << "String is Palindrome" ;
    }
    else {
        cout << "String not a Palindrome " ;
    }


    return 0 ;
}