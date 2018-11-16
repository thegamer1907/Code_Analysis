#include<bits/stdc++.h> 
using namespace std;
vector<int>v[30001];
int vis[30001]={0};
int q[30001];
int c=0;
long long int m;
void dfs(int s)
{
        vis[s]=1;
        if(s==m)
        {
                c=1;
                return;
        }
        for(int i=0;i<v[s].size();i++)
        {
                if(vis[v[s][i]]!=1)
                {
                        dfs(v[s][i]);
                }
        }
}
int main()
{
        long long int n;
        cin>>n>>m;
        for(int i=1;i<n;i++)
        {
                int x;
                cin>>x;
                v[i].push_back(i+x);
        }
        dfs(1);
        if(c==1)
        {
                cout<<"YES";
        }else cout<<"NO";
}