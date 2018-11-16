#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,k,ans;
	scanf("%d%d",&n,&k); 
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int m=a[k-1];
	sort(a,a+n);
	if(m){
	ans=n;
	for(int i=0;i<n;i++)
	{
		if(a[i]<m)	ans--;
		if(a[i]>=m) break;
	}	
	}
	else {
	ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)	ans++;
	}
	}
	printf("%d\n",ans);
	return 0;
 } 