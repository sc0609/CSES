#include <bits/stdc++.h>
using namespace std;


int main(){

    int curr = 1 , maxCurr = 1;

    string str;
    cin>>str;
    //iterating over the string
    for(int i = 1 ; i<str.length() ; i++){
        //if the current letter is same as previous we add 1 to value of curr
        if(str[i-1] == str[i]){
            curr++;
        }
        //reset the curr value
        else{
            curr = 1;
        }
        maxCurr = max(maxCurr,curr);
    }
    cout<<maxCurr;

    return 0;
}