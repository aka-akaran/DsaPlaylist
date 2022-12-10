#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector < vector <int> > tripletSum ( vector <int> list,int sum){

    vector < vector <int> > ans ;

    for (int i = 0 ; i < list.size() ; i++){
        for (int j = i+1 ; j< list.size() ; j++){
            for (int k = j+1 ; k < list.size() ; k++){                
                    if ( list[i] + list[j] + list[k] == sum){

                    vector <int> temp ;
                    temp.push_back( list[i] ) ;
                    temp.push_back( list[j] ) ;
                    temp.push_back( list[k] ) ;

                    ans.push_back(temp) ;

                }
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
    cout << "enter the length and sum value" << endl ;

    cin >> l ;
    vector <int> a ;
    int s ;
    cin >> s ;

    getVectorElements(a ,l) ;
    
    vector < vector <int> > ans ;
    ans = tripletSum(a, s) ;

    printVector(ans) ;



    return 0 ;
}