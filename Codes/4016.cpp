#include <bits/stdc++.h>

using namespace std;
int n,m,x,k,l,r;
vector<vector<int> >elem,dp;
int mx[100005];
int main()
{
    cin.sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<int>aux;
        for(int j=0;j<m;j++)
        {
            cin>>x;
            aux.push_back(x);
        }
        elem.push_back(aux);
    }
    for(int i=0;i<m;i++)
    {
        vector<int>aux;
        aux.push_back(0);
        for(int j=1;j<n;j++)
            if(elem[j][i]>=elem[j-1][i])
                aux.push_back(aux[j-1]);
            else
                aux.push_back(j);
        dp.push_back(aux);
    }
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int mn=INT_MAX;
        for(int j=0;j<m;j++)
            if(dp[j][i]<mn)
            mn=dp[j][i];
        mx[i]=mn;
    }
    for(int i=1;i<=k;i++)
    {
        cin>>l>>r;
        if(mx[r-1]<=l-1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
