#include<iostream>
#include<bits/stdc++.h>
#define sorrt(v) sort(v.begin(),v.end())
#define rsorrt(v) sort(v.rbegin(),v.rend())
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frr(i,x,n) for(int i=x;i>=n;i--)
#define ll long long
using namespace std;
void Doaa()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Doaa();
int n,k;
cin>>n>>k;
vector<int>v(n+1),ans(n+1);
fr(i,1,n+1)
cin>>v[i];
set<int>st;
frr(i,n,1)
{
    st.insert(v[i]);
    ans[i]=st.size();
}
fr(i,0,k)
{
    int x;
    cin>>x;
    cout<<ans[x]<<endl;
}

		return 0;
}
