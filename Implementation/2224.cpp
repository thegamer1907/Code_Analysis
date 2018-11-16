#include <bits/stdc++.h>
#define int long long
#define sir_dratuti cin.tie(NULL);cout.tie(NULL);ios::sync_with_stdio(0);
using namespace std;

main(){
    sir_dratuti;
    int n,ans=0,cur=0;
    int k,w;
    cin>>k>>n>>w;
    int summ=k*(w*(w+1)/2);
    cout<<max(0ll,summ-n);
}