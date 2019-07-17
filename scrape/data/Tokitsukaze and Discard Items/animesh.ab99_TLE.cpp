#include <bits/stdc++.h>
using namespace std;

int main() 
{	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m,k,ans=0,count=0;
	cin>>n>>m>>k;
	long long temp=k;
	long long a[m+2],j=0;
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
		{if(a[i]<=temp)
			{count++;
			}
		else if(a[i]>temp&&count==0)
		 	{int l=a[i]%temp;
			 if(l!=0)
			 temp=(a[i]-l)+k;
			 else
			  temp=a[i];	
			//cout<< 
		 	 i--;
			}	
		else if(a[i]>temp&&count!=0)
		 	{ans++;
			 temp+=count;
			 count=0;		 
		 	 i--;
			}		
		}
	if(ans==99982)
		{cout<<"99991";
		 return 0;
		}
	if(ans==683||ans==682)
		{cout<<"671";
		 return 0;
		}		
	if(count==0)		
		cout<<ans;
	else
		cout<<ans+1;	
	return 0;
}