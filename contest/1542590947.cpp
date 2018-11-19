#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define MAXN  1000005
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s,x;
    ll n;
    vector<vector<ll> >v(2,vector<ll>(2,0));
    cin>>s;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        if(x==s){
            cout<<"YES";
            return 0;
        }
        if(x[0]==s[0])
            v[0][0]=1;
        if(x[1]==s[1])
            v[0][1]=1;
        if(x[0]==s[1])
            v[1][1]=1;
        if(x[1]==s[0])
            v[1][0]=1;
    }
    //cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[1][0]<<" "<<v[1][1]<<endl;
    if((v[1][0]&&v[1][1])){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}

