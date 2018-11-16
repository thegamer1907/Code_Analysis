#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arra[n];
	int flag=0;
	int cn=0;
	for(int i=0;i<n;i++)
	{
	 scanf("%d",&arra[i]);
	 if(arra[i]==0)flag=1;
	 if(arra[i]==1)cn++;
    }
	int ansi=INT_MIN,ans=INT_MIN;
	if(flag==1)
	{
	
	for(int i=0;i<n;i++)
	{
	   // ans=INT_MIN;
		for(int j=i;j<n;j++)
		{
			int cnt=0;
		    int l=-1,u=-1;
		    int cnt1=0,cnt2=0;
			for(int k=i;k<=j;k++)
			{
				if(arra[k]==0)cnt++;
			}
			if(i>0 )
			{
			    for(int k=0;k<i;k++)if(arra[k]==1)cnt++;
			}
			if(j<n-1)
			{
				for(int k=j+1;k<n;k++)if(arra[k]==1)cnt++;
			}
			ans=max(ans,cnt);
			
		}
	}
	cout<<ans<<endl;
    }
    else cout<<cn-1<<endl;
}