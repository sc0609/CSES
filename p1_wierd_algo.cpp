#include <bits/stdc++.h>
using namespace std;


int main(){

    long long n;
    cin>>n;

    //printing n as first number
    cout<<n<<" ";

    while(n > 1){
        //if n == 1
        if(n ==1){
            cout<<1;
            break;
        }
        //if n is odd
        if(n % 2 != 0){
            n = n*3 + 1;
            cout<<n<<" ";
        }
        //if n is even
        else{
            n = n/2;
            cout<<n<<" ";
        }
    }

    return 0;
}