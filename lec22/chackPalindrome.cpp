#include <iostream>
using namespace std ;

bool notValid( char ch ){

    if ( (ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
        return false ;
    }

    return true ;
}

char toLowerCase( char ch ){

    if ( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ){
        return ch ;
        
    }
    else if ( (ch >='A' && ch <= 'Z') ){
        ch = ch - 'A' + 'a' ;
        return ch ;
    }
    return 0 ;
}

bool isPalindrome( string s ){

    cout << "Comparing Start and End" << endl ;
    int start = 0 ;
    int end = s.length()-1 ;
    while ( start < end ){

        char startElement = s[start] ;
        char endElement = s[end] ;

        while( notValid( startElement ) && (start+1 <= s.length()-1) ){
            start++ ;
            startElement = s[start] ;
        }
        while ( notValid( endElement ) && (end-1 >= 0) ){
            end-- ;
            endElement = s[end] ;
        }
        cout << s[start] << " " << s[end] << endl ;

        if ( toLowerCase(s[start++]) != toLowerCase(s[end--]) ){
            return false ;
        }


    }

    return true ;
}

int main(){

    string s ;
    cout << "Enter the string" << endl ;
    // cin >> s ;
    s = "N oo$ n" ;
    s = "###d#d" ;
    s = "######d" ;
    s = "##d#ab###d" ;
    s = "c1 O#d@eeD o1c" ;
    s = "a k a     " ;
    s = "A man, a plan, a canal: Panama" ;
    s = "race a car" ;
    s = "race car" ;

    cout << endl ;
    cout << s << endl ;

    bool ans = isPalindrome( s ) ;

    if ( ans )
        cout << "String is Palindrome " ;
    else
        cout << "String not a Palindrome " ;

    return 0 ;
}