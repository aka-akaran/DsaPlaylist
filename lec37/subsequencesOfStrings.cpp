// Input : [1, 2, 3]
// Output : [ [], [1], [2], [3], [1,2], [1,3], [2,3], [1,2,3] ]

#include<iostream>
#include<vector>
using namespace std ;

void solve ( string str, string output, int index, vector<string> &ans ){

    // base case
    if( index >= str.length() ){
        if( output.length() > 0 ){
            ans.push_back( output ) ;
        }
        return ;
    }

    // exclude index char
    solve( str, output, index+1, ans ) ;

    // include index char
    char element = str[index] ;
    output.push_back( element ) ;
    solve( str, output, index+1, ans ) ;

}

int main(){

    string str = "abc";
    string output ;
    int index = 0 ;
    vector <string> ans ;

    solve( str, output, index, ans ) ;

    for ( string s : ans ){
        cout << s << " ";
    }





    return 0 ;
}