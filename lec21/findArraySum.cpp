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

void reverse( vector <int> &v ){
    int start = 0 ;
    int end = v.size()-1 ;

    while( start < end ){
        swap( v[start++], v[end--] ) ;
    }
}

vector <int> arraySum( vector <int> nums1, int m, vector <int> nums2, int n ){

    vector <int> nums3 ;
    int i = m-1 ;
    int j = n-1 ;
    int sum ;
    int carry = 0 ;

    while( i >= 0 && j >= 0 ){
        sum = nums1[i--] + nums2[j--] + carry ;
        carry = sum/10 ;
        sum = sum%10 ;
        nums3.push_back( sum ) ;
    }

    while ( i >= 0 ){
        sum = nums1[i--] + carry ;
        carry = sum/10 ;
        sum = sum%10 ;
        nums3.push_back(sum) ;
    }

    while ( j >= 0 ){
        sum = nums2[j--] + carry ;
        carry = sum/10 ;
        sum = sum%10 ;
        nums3.push_back(sum) ;
    }

    while ( carry!=0 ){
        sum = carry ;
        carry = sum/10 ;
        sum = sum%10 ;
        nums3.push_back( sum ) ;
    }

    reverse( nums3) ;

    return nums3  ;
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

    vector <int> nums3 = arraySum( nums1, m, nums2, n ) ;
    printVectorElements( nums3 ) ;

    return 0 ;
}