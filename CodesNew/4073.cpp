#include <bits/stdc++.h>
using namespace std;
long long n,q,a[200006],k[200006],sum[200006],ans,l,r,ne,mid,an,last;
int main() 
{
	cin>>n>>q;
	
	for (int i=1; i<=n; i++)
    {
	    cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
	 
	for (int i=1; i<=q; i++)
	    cin>>k[i];
	 
	for (int i=1; i<=q; i++)
	{
	    ne=k[i];
	    
	    l=1; 
	    r=n;
	    
	    an=0;     
	        
	    while (l<=r)
	    {
	        mid=(l+r)/2;
	        
	        if (ne>=sum[mid]-last) { an=mid; l=mid+1; }
	                                    else r=mid-1;
	    }
	    
	    if (an==n)
	    {
	        cout<<n<<endl;
	        last=0;
	        continue;
	    }
	    
	    cout<<n-an<<endl;
	    last+=ne;
    }
	 
	return 0;
}