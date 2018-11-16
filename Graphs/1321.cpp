#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<int>v[],int s,int t)
{

    if(s==t) return 1;
    for(int i=0;i<v[s].size();i++)
    {
        if(dfs(v,v[s][i],t)) return 1;
    }
    return 0;
}
int main()
{
    int n,t,x;
    cin>>n>>t;
    vector<int>v[100005];
    for(int i=1;i<n;i++)
    {
        cin>>x;
        v[i].push_back(i+x);
    }
    x=(dfs(v,1,t));
    if(x==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}
