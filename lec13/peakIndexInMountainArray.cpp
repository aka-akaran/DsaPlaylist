#include <iostream>
#include <vector>
using namespace std ;

int peakIndexInMountainArray( vector <int> v ){

    int start = 0 ;
    int end = v.size()-1 ;

    while ( start < end ){

        int mid = start + ( end - start )/2 ;
        if ( v[mid] < v[mid+1] ){
            start = mid + 1 ;
        }
        else{
            end = mid ;
        }

    }

    return start ;
}

void getVectorElements( vector <int> &v, int length ){

    for ( int i = 0; i<length; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

int main (){

    cout << "Enter list length" << endl << "Then enter elements in Mountain Order" << endl ;
    vector <int> arr ;
    int l ;
    cin >> l ;

    getVectorElements( arr, l ) ;
    int ans = peakIndexInMountainArray( arr ) ;
    cout << ans ;


    return 0 ;
}