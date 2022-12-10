#include <iostream>
using namespace std ;

bool checkEqual( int arr1[26], int arr2[26] ){
    for( int i = 0; i< 26; i++ ){
        if ( arr1[i] != arr2[i] ){
            return false ;
        }
    }
    return true ;
}

bool checkInclusion( string s1, string s2 ){

    int count1[26] = {0};

    for ( char i : s1 ){
        int index = i - 'a' ;
        count1[index]++ ;
    }

    // traverse s2 in window s1 length and compare

    int i = 0 ;
    int windowSize = s1.length() ;
    int count2[26] = {0} ;

    //running for first window

    while( i< windowSize && i < s2.length()){
        int index = s2[i] - 'a' ;
        count2[index]++ ;
        i++ ;
    }

    if ( checkEqual( count1, count2 ) ){
        cout << "Equal" ;
        return 1 ;
    }


    // Iterating over s2 in window size
    while( i < s2.length() ){
        char newchar = s2[i] ;
        int index = newchar - 'a' ;
        count2[index]++ ;

        char oldchar = s2[i-windowSize] ;
        index = oldchar - 'a' ;
        count2[index]-- ;

        if ( checkEqual( count1, count2 ) ){
            cout << "Equal" ;
            return true ;
        }
        i++ ;
    }
    
    return false;
}

int main(){

    string s1, s2 ;
    cin >> s1 >> s2 ;
    bool ans ;
    ans = checkInclusion(s1, s2) ;
    // cout << ans ;


    return ans ;
}