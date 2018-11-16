#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string a;
    cin>>a;
    ll N=a.size(),i,j;
    vector<ll> ab,ba;
    for(i=0;i<N-1;i++){
        if(a[i]=='A'&&a[i+1]=='B') ab.push_back(i+1);
        if(a[i]=='B'&&a[i+1]=='A') ba.push_back(i+1); 
    }

    ll n=ab.size(),m=ba.size();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(ab[i]-ba[j])>1){
                cout<<"YES";
                exit(0);
            }
        }
    }
    cout<<"NO";
}