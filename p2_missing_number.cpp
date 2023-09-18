#include <bits/stdc++.h>
using namespace std;


int main(){

    long long n, sum = 0;
    cin>>n;

    for(int i = 0 ; i < n-1 ; i++){
        int temp;
        cin>>temp;
        sum = sum + temp;
    }
    //idea is that the missing number 
    //will be the sum of given terms - sum of terms appearing in line 2 
    cout<<(n*(n+1))/2 - sum;

    return 0;
}