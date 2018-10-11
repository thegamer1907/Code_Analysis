#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long 
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
    {
        IOS;
        int n;
        cin>>n;
        ll a[n+1];
        ll t;
        cin>>t;
        int c=0;
        for(int i=1;i<=n;i++)
        {
        	cin>>a[i];
        }
        ll pre[n+1];
        pre[0]=0;
        for(int i=0;i<=n;i++)
        	pre[i]=0;
        for(ll i=1;i<=n;i++)
        	pre[i]=pre[i-1]+a[i];
        for(int i=1;i<=n;i++)
        {
        	int low=i;
        	int high=n;

        	while(low<high)
        	{
        		int mid=(low+high+1)/2;
        		if(t<(pre[mid]-pre[i-1]))
        		{
        			high=mid-1;
        		}
        		else
        		{
        			low=mid;
        		}
        	}
        	if(c<=(low-i)+1 && pre[low]-pre[i-1]<=t)
        		c=(low-i)+1;
        }
        cout<<c<<endl;
        return 0;
    }
