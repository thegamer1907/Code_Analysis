#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m+1];
    for(int i=1;i<=m;++i)
    {
        cin>>arr[i];
    }
    ll level = 1;
    ll rem = 0;
    ll ops = 0;
    int i = 1;
    ll extra = 0;
    while(rem<m)
    {
        extra = 0;
        while(i<=m && arr[i]<=(level*k+rem))
        {
            i++;
            extra++;
        }
        rem+=extra;
        if(extra>0)
        {
            ops++;
        }
        if(i>=m+1)
        {
            break;
        }
        level+= ceil((double)(arr[i]-(level*k+rem))/k);
    }
    cout<<ops;
}