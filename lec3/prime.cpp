#include<iostream>
using namespace std ;

int main(){

    int n ;
    cin >> n ;


    int i = 2 ;
    bool flag = 1;

    while(i < n){


        if (n%i == 0){
            cout << "Not Prime" << endl ;
            flag = 0 ;
        }

        i++ ;
    }


    if (flag == 1)
        cout << "Input is prime" << endl;

    return 0 ;

}