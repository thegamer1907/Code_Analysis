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
        cin>>a>>s>>d;
        x+=a;
        y+=s;
        z+=d;
    }
    if(x==0&&y==0&&z==0){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}