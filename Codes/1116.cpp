#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,d,money,f;  cin>>n>>d;
    vector<pair<int,int>> v;
    for(int i=0;i<n&&cin>>money>>f;i++)
        v.push_back(make_pair(money,f));
    sort(v.begin(),v.end());
    long long l=0,r=0,sum=v[0].second,ans=v[0].second;
    while(r<n-1)
    {
        if(v[r+1].first-v[l].first<d)
        {
            sum+=v[r+1].second;
            ans=max(ans,sum);
            r++;
        }
        else
        {
            sum-=v[l].second;
            l++;
        }
    }
    cout<<ans;
    return 0;
}
