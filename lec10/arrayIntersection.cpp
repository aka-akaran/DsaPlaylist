#include <iostream>
#include <vector>
using namespace std ;

vector <int>  naiveIntersection( vector <int> a , vector <int> b){

    vector <int> ans ;

    for (int i = 0 ; i < a.size() ; i++){
        for (int j = 0; j < b.size(); j++){
            if (a[i] == b[j]){
                ans.push_back(a[i]) ;
                b[j] = INT_MIN ;
                break ;
            }
        }
    }

    return ans ;
}



vector <int>  twoPointerIntersection( vector <int> a , vector <int> b){

    vector <int> ans ;
    int i = 0, j = 0 ;


    while( i<a.size() && j<b.size() ){
        
        if ( a[i] < b[j] )
            i++ ;
        
        else if ( a[i] == b[j] ){
            ans.push_back(a[i]) ;
            i++ ;
            j++ ;
        }

        else 
            j++ ;
    }

    return ans ;
}



void getVectorElements ( vector <int> &list, int length ){

        int element ;
        for (int i = 0 ; i < length ; i++){

            //cin >> list[i] ;
            cin >> element ;
            list.push_back(element) ;

        }
}



void printVector ( vector <int> &list){

        for (int i = 0 ; i < list.size() ; i++){
            cout << list[i] << " " ;
        }
        // for ( int i : ans)
        //     cout << i ;

}



int main (){

    int n , m ;
    //cout << "Enter length of array a and b " << endl ;
    cin >> n >> m ;

    vector <int> a ;
    vector <int> b ;

    //cout << "Enter elements for array 1" << endl ;
    getVectorElements(a, n) ;


    //cout << "Enter elements for array 2" << endl ;
    getVectorElements(b, m) ;

    //vector <int> ans = twoPointerIntersection(a, b) ;
    vector <int> ans = naiveIntersection(a, b) ;

    printVector(ans) ;




    return 0 ;
}

// vector is passed by value
// vector is not passed by reference 