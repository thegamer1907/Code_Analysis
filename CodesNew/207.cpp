#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	int ans=0, tmnow=0, last=0, wsize=0;
	
	cin>>n>>t;
	
	int minutes[n];
	
	for (int i=0; i<n; i++)
	{
		cin>>minutes[i];
	}
	
	for (int i=0; i<n; i++)
	{
		if (tmnow+minutes[i]<=t)
		{
			tmnow+=minutes[i];
			wsize++;
		}
		else
		{
			while (tmnow+minutes[i]>t)
			{
				tmnow-=minutes[last];
				wsize--;
				last++;
			}
			
			tmnow+=minutes[i];
			wsize++;
		}
		
		ans=max(ans, wsize);
	}
	
	cout<<ans<<endl;
	
	return 0;
}