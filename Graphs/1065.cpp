#include<bits/stdc++.h>
using namespace std;
bool visited[300000];
int flag=0;

void dfs(int source,vector<int> v[],int t)
{
    int i;
    visited[source] = true;
    for(i=0;i<v[source].size();i++)
    {
        if(v[source][i]!=true)
        {
             //cout<<v[source][i]<<"  ";
            visited[v[source][i]]=true;
            //cout<<v[source][i]<<" pp ";
            if(v[source][i]==t)
            {
                cout<<"YES";
                flag = 1;
                return;
            }
            else
            dfs(v[source][i],v,t);
        }
    }
}
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    int a[n+1];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        a[i] = i+a[i];
    }
    vector<int> v[n+1];
    for(i=1;i<n;i++)
    {
        v[i].push_back(a[i]);
    }

    dfs(1,v,t);
    if(flag==0) cout<<"NO";



    return 0;
}
