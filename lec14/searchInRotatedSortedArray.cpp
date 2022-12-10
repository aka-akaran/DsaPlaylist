#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int l ){

    for ( int i = 0; i<l; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

int binarySearch( vector <int> v, int start, int end, int key ){

    while ( start <= end ){

        int mid = start + ( end-start )/2 ;

        if ( v[mid] == key ){
            return mid ;
        }
        else if ( v[mid] < key ){
            start = mid+1 ;
        }
        else {
            end = mid -1 ;
        }
    } 
    return -1 ;   
}

int getPivot( vector <int> v ){

    int s = 0 ;
    int e = v.size() - 1 ;

    while( s<e ){
// we didn't take "=" because for non rotated sorted array
// s and e overlapes and value at start > value at 0
// now we dont want our s incremented to mid+1

        int mid = s + ( e-s )/2 ;
        // NOTE : mid = s, when s and e overlap or coincide

        if ( v[mid] >= v[0] ){
            s = mid +1 ;
        }

        else {
            e = mid ;
        }

    }

    if ( v[s] > v[0] ){
        return 0 ;
    }

    return s ;

}



int main (){

    vector <int> arr ;

    cout << "Enter length then array then key" << endl ;
    int l , key ;
    cin >> l ;

    getVectorElements( arr, l ) ;
    int pivot = getPivot( arr ) ;

    cin >> key ;

    if ( arr[pivot] <= key && key <= arr[l-1] ) {
        cout << binarySearch( arr, pivot, l-1, key ) ;
    }

    else {
        cout << binarySearch( arr, 0, pivot -1, key ) ;
    }

    return 0 ;
}