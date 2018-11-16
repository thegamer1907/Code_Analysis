#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > v;
int n,k,rez=0;
long long int a(int f,int s){
    if(v[f][s]!=-1)return v[f][s];
    if(f==k){
        v[f][s]=1;
        return v[f][s];
    }
    v[f][s]=0;
    for(int i = 1 ; i*s <= n ; i ++){
        v[f][s]+=a(f+1,s*i);
        v[f][s]%=1000000007;
    }
    return v[f][s];
}
int main(){
    cin>>n>>k;
    v.resize(k+1,vector<int> (n+1,-1));
    for(int i = 1 ; i <= n ; i ++){
        rez+=a(1,i);
        rez%=1000000007;
    }
    cout<<rez;
}
