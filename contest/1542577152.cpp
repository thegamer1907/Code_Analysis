#include <bits/stdc++.h>
using namespace std;
/**************TEMPLATE***************************************************************************************************/
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)



/*************************************************************************************************************************/

int t1[5][100010];
int cnt[5];
int cnyy[5][100010];
int arr[7];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			cin>>t1[j][i];
			if(t1[j][i]==1)
			{
				cnt[j]++;
			}
		}
	}

	for(int i=1;i<=k;i++)
	{
		if(cnt[i]>=n)
		{
			cout<<"NO"<<endl; return 0;
		}
	}
	if(k==1)
	{
		cout<<"YES"<<endl; return 0;
	}
	else if(k==2)
	{
		int cny=0;
		for(int i=0;i<n;i++)
		{
			cny=0;
			for(int j=1;j<=k;j++)
			{
				if(t1[j][i]==0)
				{
					cny++;
				}
			}
			if(cny>=1){cout<<"YES"<<endl; return 0;}
		}

	}
	else if(k==3)
	{
		int cny=0;
		for(int i=0;i<n;i++)
		{
			cny=0;
			for(int j=1;j<=k;j++)
			{
				if(t1[j][i]==0)
				{
					cny++;
				}
			}
			if(cny>=2){cout<<"YES"<<endl; return 0;}
	}}
	else if(k==4)
	{
		
		int cny=0;
		for(int i=0;i<n;i++)
		{
			cny=0;
			for(int j=1;j<=k;j++)
			{
				if(t1[j][i]==0)
				{
					cny++;
					cnyy[j][i]++;
					//if(cny>=2){v}
				}
			}
			if(cny>=3){cout<<"YES"<<endl; return 0;}
		}
			
			for(int i=0;i<n;i++)
			{
				if(t1[1][i]==t1[2][i] && t1[1][i]==0)
				{
					arr[1]++;
				}
				if(t1[2][i]==t1[3][i] && t1[3][i]==0)
				{
					arr[2]++;
				}
				if(t1[3][i]==t1[4][i] && t1[4][i]==0)
				{
					arr[3]++;
				}
				if(t1[1][i]==t1[3][i] && t1[3][i]==0)
				{
					arr[4]++;
				}
				if(t1[1][i]==t1[4][i] && t1[1][i]==0)
				{
					arr[5]++;
				}
				if(t1[2][i]==t1[4][i] && t1[2][i]==0)
				{
					arr[6]++;
				}
			}
		/*	for(int i=1;i<=6;i++)
			{
				cout<<arr[i]<<endl;
			}*/
			if((arr[1]>0 && arr[3]>0) )
			{
				cout<<"YES"<<endl; return 0;
			}
			if((arr[2]>0 && arr[5]>0) || (arr[4]>0 && arr[6]>0) )
			{
				cout<<"YES"<<endl; return 0;
			}

			

	
}
	cout<<"NO"<<endl;
}