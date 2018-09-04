#include <bits/stdc++.h>
using namespace std;
int n,a,sum,m,b;
vector <int> v;
vector <int> vec;
int upperb(int n,int eleman)
{
	int l=0;
	int h=n;
	while(l<h)
	{
		int mid=(l+h)/2;
		if(eleman<=v[mid])
		{
			h=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	return l;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		sum+=a;
		v.push_back(sum);
	}
//	for(int i=0;i<=n-1;i++)
	//{
	//	cout<<v[i];
	//}
	//
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		cin>>b;
		vec.push_back(b);
	}
	for(int i=0;i<=m-1;i++)
	{
		cout<<upperb(n,vec[i])+1<<endl;	
	}
	return 0;
}

