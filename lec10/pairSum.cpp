#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector < vector <int> > pairSum ( vector <int> list,int sum){

    vector < vector <int> > ans ;

    for (int i = 0 ; i < list.size() ; i++){
        for (int j = i+1 ; j< list.size() ; j++){
            if ( list[i] + list[j] == sum){

                vector <int> temp ;
                temp.push_back( min( list[i], list[j] ) ) ;
                temp.push_back( max( list[i], list[j] ) ) ;
                ans.push_back(temp) ;

            }
        }
    }
    
    sort( ans.begin(), ans.end() ) ;
    return ans ;
}

void getVectorElements( vector <int> &v, int length){

    for (int i = 0 ; i<length ; i++){
        int element ;
        cin >> element ;
        v.push_back(element) ;
    }

}

void printVector( vector < vector<int> > v ){

    for (vector <int> i : v){
        for ( int j : i){
            cout << j << " ";
        }
        cout << endl ;
    }

}

int main (){

    int l ;
    cin >> l ;
    vector <int> a ;
    int s ;
    cin >> s ;

    getVectorElements(a ,l) ;
    
    vector < vector <int> > ans ;
    ans = pairSum(a, s) ;

    printVector(ans) ;



    return 0 ;
}