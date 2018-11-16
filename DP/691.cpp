#include<iostream>
#include<climits>
#include<algorithm>
#include<cstdio>
#include<string.h>
using namespace std;
typedef long long ll;

int main(){
    string str;
    cin >> str;

    ll n= str.length();
    int dp[n-1];
    for(int i=0;i<n-1;i++){
        if(str[i] == str[i+1]){
            dp[i]=1;
        }else{
            dp[i]=0;
        }
    }
    for(int i=1;i<n-1;i++){
        dp[i]+=dp[i-1];
    }

    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        a = a - 1;
        b = b - 2;
        if (a == 0) {
            cout << dp[b] << endl;
        } else {
            cout << dp[b] - dp[a-1] << endl;
        }
    }
}