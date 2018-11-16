#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int cnt=0;
    ll n;
    cin>>n;
        cnt+=n/100;
        n=n%100;
        cnt+=n/20;
        n%=20;
        cnt+=n/10;
        n%=10;
        cnt+=n/5;
        n%=5;
        cnt+=n/1;
        n%=1;
        
    cout<<cnt;
    return 0;
}