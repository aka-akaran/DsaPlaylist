#include<iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int length ){

    for ( int i = 0; i<length; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

void printVectorElements( vector <int> v ){

    for ( int i: v ){
        cout << i << " " ;
    }

}

vector <int> merge( vector <int> nums1, int m, vector <int> nums2, int n ){

    vector <int> nums3 ;
    int i = 0 ;
    int j = 0 ;

    while( i < m && j < n ){
        if( nums1[i] < nums2[j] ){
            nums3.push_back(nums1[i++]) ;
        }
        else {
            nums3.push_back(nums2[j++]) ;
        }
    }

    while ( i < m ){
        nums3.push_back( nums1[i++] ) ;
    }
    while ( j < n ){
        nums3.push_back( nums2[j++] ) ;
    }

    return nums3 ;
}

int main (){

    int m, n ;
    vector <int> nums1 ;
    vector <int> nums2 ;

    cout << "Enter space seperated lengths then elements" << endl ;

    cin >> m ;
    cin >> n ;

    getVectorElements( nums1, m ) ;
    getVectorElements( nums2, n ) ;

    vector <int> nums3 = merge( nums1, m, nums2, n ) ;
    printVectorElements( nums3 ) ;

    return 0 ;
}