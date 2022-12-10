#include <iostream>
#include <vector>
using namespace std ;

void solve( string digits, string output, int index, string mapping[], vector <string> &ans ){

    // base case
    if( index >= digits.length() ){
        ans.push_back( output ) ;
        return ;
    }

    int number = digits[index] - '0' ;
    string value = mapping[ number ] ;

    for ( int i = 0; i< value.length(); i++ ){
        output.push_back( value[i] ) ;
        solve( digits, output, index+1, mapping, ans ) ;
        output.pop_back() ;
    }



}


vector <string> letterCombination ( string digits ){

    vector <string> ans ;
    string output ;
    int index = 0 ;

    if ( digits.length() == 0 ){
        return ans ;
    }

    string mapping[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" } ;
    solve( digits, output, index, mapping, ans ) ;
    return ans ;

}



int main(){

    string digits ;
    cin >> digits ;
    vector <string> ans ;
    ans = letterCombination( digits ) ;

    for ( string s : ans ){
        cout << s << " ";
    }


    return 0 ;
}