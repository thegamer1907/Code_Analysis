#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int no,one=0;
    cin>>no;
    int dp[101];
    vector<int> v;
    char ch;
    for(int i=0;i<no;i++){
        cin>>ch;
        if(ch=='0'){
            v.push_back(1);
        }
        else{
            one++;
            v.push_back(-1);
        }
    }
    dp[0]=v[0];
    for(int i=1;i<no;i++){
        dp[i]=max(v[i],dp[i-1]+v[i]);
    }
    int *p=max_element(dp,dp+no);
    cout<<one+*p;
}