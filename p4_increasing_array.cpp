#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ll n, prev , curr , ans = 0;

    cin>>n;
    cin>>prev;

    for(int i = 1 ; i < n ; i++){
        cin>>curr;
        if(curr < prev){
            ans = ans + (prev - curr);
        }
        else{
            prev = curr;
        }
    }
    cout<<ans;

    return 0;
}