#include<bits/stdc++.h>

using namespace std;

const int N=1e5+5,
        INF=1e9+7;

string s;

map<string, int>usd;

set<string>q;

int n, m, k1, k2, k3;

int main()
{

    cin>>n>>m;
    for (int i=1; i<=n; ++i){
        cin>>s;
        q.insert(s);
        usd[s]++;
    }
    for (int i=1; i<=m; ++i){
        cin>>s;
        usd[s]++;
    }
    for (set<string>::iterator it=q.begin(); it!=q.end(); ++it){
        if (usd[*it]==2) k3++;
    }
    k1=n-k3;
    k2=m-k3;
    if (k3%2!=0) k1++;
    if (k1>k2) return cout<<"YES",0;
    cout<<"NO";
}
