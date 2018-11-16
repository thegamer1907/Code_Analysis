#include<bits/stdc++.h>
using namespace std;
int mk[100000];
int a[100000];
int n,m;
void dfs(int i)
{
    if(i>=n)
        return;
    int j = a[i]+i;
    mk[j] = 1;
    dfs(j);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
    }
    mk[1]=1;
    dfs(1);
    if(mk[m]==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}