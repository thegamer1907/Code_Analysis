#include<bits/stdc++.h>
using namespace std;
        int n ,t;
int a[100000];bool vis[100000];
vector<vector<int > > v(100000);
bool dfs(int i)
{
    if (i==t)return 1;
    if (vis[i])return 0;
    vis[i]=1;
    bool ret=0;

        ret= dfs(a[i]+i)|ret;


return ret;

}
int main ()
{
        cin>> n >> t;
        for(int i =1 ; i<n ; i++)
                cin>>a[i];
    if (dfs(1))cout<<"YES";
    else cout <<"NO";


    return 0;
}
