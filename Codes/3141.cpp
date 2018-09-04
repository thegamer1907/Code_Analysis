#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>
#define SPD ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    SPD;
    int n;cin>>n;
    int t=0,a[n]={},mn=INT_MAX;
    for(int i=0;i<n;++i)cin>>a[i],mn=a[i]<mn?a[i]:mn;
    int i=0;
    t=mn=(mn/n)*n;
    while(a[i%n]-t>0)i++,t++;
    cout<<i%n+1;
    return 0;
}
