#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c[8]={2,4,8,16,32,64,128,256};
	int n,a,b;
	cin>>n>>a>>b;
	if(a>b)swap(a,b);
	int num=1;
	int ma=1;
	for(int i=b-1;i>=a;i--)
	{
		int d=i;
		num=1;
		while(d%2==0)
		{
			num++;
			d/=2;
		}
		ma=max(ma,num);
	}
	int k=lower_bound(c,c+8,n)-c+1;
	if(ma==k)puts("Final!");
	else cout<<ma<<endl;
 } 
