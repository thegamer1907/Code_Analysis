#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define mp make_pair
#define e end
#define b begin
int main()
{
    IOS;
    int n,y,i;
    cin>>n>>y;
    int a[n+1];
    map<int,int> m;
    int dp[n+1]={};
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        dp[i]=m.size();
        m[a[i]]--;
        if(m[a[i]]==0)
        m.erase(a[i]);
    }
    for(i=0;i<y;i++)
    {
        int x;
        cin>>x;
        cout<<dp[x]<<endl;
    }
}
    