#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int count;
	count =0;
	int j;
	bool bt[m] ={false};
	sort(a,a+n);
	sort(b,b+m);
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<m)
		{
			
			if(b[j]==a[i] && bt[j] == 0)
			{
				count++;
				bt[j] =1;
				break;
			}
			else if(b[j]==(a[i] -1) && bt[j] == 0)
			{
				count++;
				bt[j] =1;
				break;
			}
			else if(b[j]==(a[i]+1) && bt[j] == 0)
			{
				count++;
				bt[j] =1;
				break;
			}
			else
			{
				j++;
			}
		}
	}
	cout<<count;
}