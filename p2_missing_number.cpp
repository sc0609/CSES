#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> arr(n,0);

    //to run loop n-1 times and mark value at those index as 1;
    for(int i=0 ; i<n-1 ; i++){
        int temp;
        cin>>temp;
        arr[temp] = 1;
    }

    //to find which index still has value = 0;
    for(int i=1 ; i<=n ; i++){
        if(arr[i] == 0){
            cout<<i;
            break;
        }
    }

    return 0;
}