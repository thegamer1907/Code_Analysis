#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    ll len=s.size();
    for(ll i=0; i<t; i++){
        for(ll j=0; j<n; j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}