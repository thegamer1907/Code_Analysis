// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll ans=0;
    if(n%2==1)ans=-1*n;
    ans+=n/2;
    cout<<ans;
    return 0;
}