#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=1e5+5;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,d,ans=0,s=0;cin>>n>>d;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    int i=0,j=0;
    while(i<n && j<n)
    {
    	if(a[j].first-a[i].first<d)
    	{
    		s+=a[j].second;
    		ans=max(ans,s);
    		j++;
    	}
    	else
    	{
    		s-=a[i].second;
    		i++;
    	}
    }
    cout<<ans;


 }