#include<bits/stdc++.h>
#define ll long long
using namespace std;
int vis[10000005];
map<int,int> ma;
int A[10000005],ans[10000005];
void seive()
{
	for(int i=0;i<=10000000;i++)vis[i]=1;
	vis[0]=vis[1]=0;
	for(int i=2;i<=10000000;i++)
	   {
	   	 if(vis[i])
	   	   {
			 for(int j=i;j<=10000000;j+=i)
			   {
			      vis[j]=0;
			      ans[i]+=A[j];
			   }  	
		   }
	   }
}
int main()
{
	ios_base::sync_with_stdio(false);
	int n,a,r,l,q;
	cin>>n;
	for(int i=0;i<n;i++)
	   {
	   	 cin>>a;
	   	 A[a]++;
	   }
	seive();
	//for(int i=0;i<10;i++)cout<<ans[i]<<" ";
	for(int i=1;i<=10000000;i++)ans[i]+=ans[i-1];
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		cout<<ans[min(r,10000000)]-ans[min(10000000,l-1)]<<endl;
	}
	return 0;
}