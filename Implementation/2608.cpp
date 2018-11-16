// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a,s,d,i,x=0,y=0,z=0;
    for(i=0;i<n;i++){
        cin>>a>>s;
        if(s-a>=2)x++;
    }
    cout<<x;
    return 0;
}