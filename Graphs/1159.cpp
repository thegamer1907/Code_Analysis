#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void f1(vector<ll> graph[],ll s,vector<bool> &visited,ll t)
{
    queue<ll> q1;
    q1.push(s);
    visited[s]=true;
    while(!q1.empty())
    {
        ll f=q1.front();
        q1.pop();
        if(f==t)
        {
            cout<<"YES";
            return;
        }
        for(auto it=graph[f].begin();it!=graph[f].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                q1.push(*it);
            }
        }
    }
    cout<<"NO";
}
int main()
{
    ll n,t,a;
    cin>>n>>t;
    vector<ll> v1;
    vector<ll> graph[100000];
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    for(ll i=0;i<n;i++)
    {
        graph[i+1].push_back((i+1)+v1[i]);
    }
    vector<bool> visited(100000,false);
    f1(graph,1,visited,t);
}