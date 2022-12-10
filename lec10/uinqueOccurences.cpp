#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int length){

    for (int i = 0; i< length; i++){
        int element ;
        cin >> element ;
        v.push_back(element) ;
    }

}

bool uniqueOccurences( vector <int> v){

    vector <int> ans ;

    for ( int i = 0; i< v.size(); i++ ){
        int count = 1 ;
        if ( v[i] != INT_MIN ){
            for (int j = i+1 ; j<v.size(); j++){
                if ( v[i] == v[j] ){
                    count++ ;
                    v[j] = INT_MIN ;
                }
            }
            
            if ( count > 0 ){
            ans.push_back(count) ;
            }
        }
    }
    
    // for ( int i : ans ){
    //     cout << i << " " ;
    // }

    for ( int i = 0 ; i<ans.size(); i++ ){
        int count_freq = 1 ;
        for ( int j = i+1; j<ans.size(); j++){
            if ( ans[i] == ans[j] ){
                count_freq++ ;
            }
        }

        if (count_freq > 1){
            // cout << ans[i] << " " ;
            return false ;
        }
    }

    return true ;
}

void printVector( vector <int> v){

    for (int i : v){
        cout << i ;
    }

}



int main (){

    int l  ;
    vector <int> arr ;
    cin >> l ;

    getVectorElements(arr, l) ;
    // printVector(arr) ;
    bool ans = uniqueOccurences(arr) ;

    if ( ans ){
        cout << "Unique Occurences" ;
    }

    else{
        cout << "No Unique Occurences" ;
    }




    return 0 ;
}