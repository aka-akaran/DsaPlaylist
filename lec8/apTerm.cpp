#include<iostream>
using namespace std ;

// this function will calculate nth term of AP (3*n + 7)
int apterm( int term){

    int answer ;
    int a = 10, d = 3 ;  
    // a is the first term of AP
    // d is the common difference of AP


    answer = a ;  // First term of AP is 10 ;

    for (int i = 2 ; i<=term ; i++){
        answer += d ;
    }


    return answer ;
}


int main(){

    int n ;
    cin >> n ;

    cout << n << " term of AP is " << apterm(n) ;


    return 0 ;
}