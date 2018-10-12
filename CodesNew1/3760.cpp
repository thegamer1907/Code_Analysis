#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,m;
	while(cin>>b>>m)
	{
		vector<int>a(b);
		double sum=0;
		int mmax=0;
		for(int i=0; i<b; i++)
		{
			cin>>a[i];
			sum +=a[i];
			mmax =max(mmax,a[i]);
			
		}
		sum +=m;
		cout<<max(mmax,(int)ceil(sum/b))<<" ";
		cout<<mmax+m<<"\n";
	}
	return 0;
}