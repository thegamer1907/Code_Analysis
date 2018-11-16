// By Kishan Radia
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(){
    ll n,k,w;
    cin>>k>>n>>w;
    w=(w*(w+1))/2;
    w*=k;
    w=w-n;
    if(w<0)w=0;
    cout<<w;
    return 0;
}