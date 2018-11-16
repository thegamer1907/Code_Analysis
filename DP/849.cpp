#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[200];
    cin>>n;

    for(int i=0 ; i<n ; i++)
		cin>>a[i];

//	for(int i=0 ; i<n ; i++)
//		cout<<a[i]<<" ";
//	cout<<endl;

	int maxi=0, s=0, e=0;
	for(int i=0 ; i<n ; i++)
	for(int j=i ; j<n ; j++)
	{
		int sm=0;
		for(int k=i ; k<=j ; k++)
		{
			if(!a[k])	sm++;
			else		sm--;

//			if(i==1 && j==7)
//				cout<<sm<<" ";
		}
//		cout<<endl;

//		cout<<"sm="<<sm<<" i="<<i<<" j="<<j<<endl;

		if(sm>maxi)
		{
			maxi=sm;
			s=i;
			e=j;
		}
	}

	int res=0;

	for(int i=s ; i<=e ; i++)
		res+=(!a[i]);
//	cout<<res<<" ";
	for(int i=0 ; i<s ; i++)
		res+=a[i];
//	cout<<res<<endl;
	for(int i=e+1 ; i<n ; i++)
		res+=a[i];

	cout<<res;
}
