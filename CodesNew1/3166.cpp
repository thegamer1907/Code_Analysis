//MY code
#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,a[300005],ans=-1,anse=-1,maxi=0,c;
	vector<int>v;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
	    if(a[i]==0)
	    {
	        k++;
	    }
	    v.pb(k);
        //cout<<i<<" "<<k<<"\n";
	}
    int p;
	for(int i=0;i<n;i++)
	{
        if(a[i]==0)
        {
            p=1;
        }
        else
        {
            p=0;
        }
	    auto it=upper_bound(v.begin(),v.end(),v[i]+m-p);
	    if(it==v.end())
	    {
	        c=n-1;
	    }
	    else
	    {
	        c=(it-v.begin())-1;
	    }
        //cout<<i<<" "<<c<<"\n";
	    if(maxi<(c-i+1))
	    {
	        maxi=c-i+1;
	        ans=i;
	        anse=c;
	    }
	}
	
	cout<<maxi<<"\n";
	for(int i=0;i<n;i++)
	{
	    if(i==ans)
	    {
	        while(i<=anse)
	        {
	            cout<<"1 ";
	            i++;
	        }
	    }
        if(i<n)
        cout<<a[i]<<" ";
	}
	return 0;
}
