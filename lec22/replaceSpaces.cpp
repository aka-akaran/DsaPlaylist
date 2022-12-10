#include <iostream>
using namespace std ;

void replaceSpaces( string &mainstring, string replaceSpaceWith ){
// IN-PLACE SOLUTION
    for ( int i = 0; i<mainstring.length(); i++ ){
        if( mainstring[i] == ' ' ){
            mainstring.replace( i, 1, replaceSpaceWith ) ;
        }
    }

}

string replaceSpace( string &mainstring, string replaceSpaceWith ){
// OUT-PLACE SOLUTION
    string temp = "" ;
    for ( int i = 0; i<mainstring.length(); i++ ){
        if( mainstring[i] == ' ' ){
            temp.push_back('@') ;
            temp.push_back('4') ;
            temp.push_back('0') ;

        }
        else{
            temp.push_back(mainstring[i]) ;
        }
    }
    return temp ;
}


int main(){

    string s, replaceSpaceWith ;
    s = "my name is khan" ;
    replaceSpaceWith = "@40" ;
    
// Inplace Solution
    // replaceSpaces(s, replaceSpaceWith) ;
    // cout << s ;

// Outplace Solution
    string ans = replaceSpace(s, replaceSpaceWith) ;
    cout << ans ;

    return 0 ;
}