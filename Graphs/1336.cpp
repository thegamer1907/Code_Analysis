#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<int>v[], int t, int s)
{
    if(t==s) return 1;
    for(int i=0;i<v[s].size();i++)
    {
        if(v[s][i]==t) return 1;
        else if(dfs(v, t, v[s][i])) return 1;
    }
    return 0;
}

int main()
{
    int n, t;
    vector<int> v[100010];
    map<int , bool> vis;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        v[i].push_back(i+x);
    }

    if(dfs(v, t, 1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
