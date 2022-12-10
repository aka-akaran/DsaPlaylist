// Input : [1, 2, 3]
// Output : [ [], [1], [2], [3], [1,2], [1,3], [2,3], [1,2,3] ]

#include<iostream>
#include<vector>
using namespace std ;

void solve ( vector <int> nums, vector <int> output, int index, vector< vector<int> > &ans ){

    // base case
    if( index >= nums.size() ){
        ans.push_back( output ) ;
        return ;
    }

    // exclude index element
    solve( nums, output, index+1, ans ) ;

    // include index element
    int element = nums[index] ;
    output.push_back( element ) ;
    solve( nums, output, index+1, ans ) ;

}

int main(){

    vector <int> nums = {1,2,3} ;
    vector< vector<int> > ans ;
    int index = 0 ;
    vector <int> output ;
    solve( nums, output, index, ans ) ;

    for( vector<int> i : ans ){
        for( int j : i ){
            cout << j << "," ;
        }
        cout << endl ;
    }



    return 0 ;
}