#include "bits/stdc++.h"
using namespace std;

int main()
{
	set<int> v;
	int i,j,k,n;
	cin>>n;
	k = 0;
	for (i=1;i<=n;i++)
	{
		cin>>j;
		if (j == i) k++;
		else v.insert(j);
	}
	cout<<k+v.size()/2<<endl;
	return 0;
}
