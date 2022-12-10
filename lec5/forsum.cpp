#include<iostream>
using namespace std ;

int main(){

    int num, sum ;
    cin >> num ;

    for (int i = 1 ; i <= num ; i++){
        sum += i ;
    }

    cout << sum ;



    return 0 ;
}