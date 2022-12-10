#include <iostream>
#include<vector>
using namespace std ;

void getVectorElements( vector <int> &v, int length){

    for (int i = 0; i< length; i++){
        int element ;
        cin >> element ;
        v.push_back(element) ;
    }

}

vector <int> findDuplicates( vector <int> v ){

    vector <int> ans ;

    int myconst = v.size() ; // we can also take value greater than v size

// Using array as hash table because we know that the 
// input values of the list is in the range [1, n]
// here n is the size of the list

    for (int i = 0; i< v.size(); i++){
        v[v[i]%v.size()] += myconst ;
    }

    
// if( v[i] > 2*myconst )
// because if element occurs more two or more than two time
// then value at that index is increased 2 times by myconst

    for (int i = 1; i< v.size(); i++){
        if( v[i] > 2*myconst ){
            ans.push_back(i) ;
        }
    }
// Because at index 0, int with value v.size() is present
    if ( v[0] > 2*myconst ){
        ans.push_back(v.size()) ;
    }


    return ans ;
}

void printVector( vector <int> v ){

    for (int i : v){
        cout << i << " ";
    }

}

int main(){

    vector <int> nums ;
    cout << "enter the length of the vector" << endl ;
    int l ;
    cin >> l ;
    getVectorElements(nums, l) ;
    vector <int> ans = findDuplicates(nums) ;
    printVector(ans) ;

    return 0 ;
}