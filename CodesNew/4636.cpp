#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
const int M=10e5+2;
int a[M*5];
int main()
{
	int n;
	while(cin>>n)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;++i)
		scanf("%d",&a[i]);
		sort(a+1,a+n+1);
		int l,r,pair=0;
		l=n/2,r=n; 
		while(n/2<r&&l>=1)
		{
		    if(2*a[l]<=a[r])
		    {
		    	pair++;
		    	l--,r--;
			}
			else l--;
		}
		cout<<n-pair<<endl;
	}
 } 