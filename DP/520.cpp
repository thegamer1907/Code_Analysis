#include<bits/stdc++.h>
using namespace std;

#define MX 100005

int a[MX], segTree[4*MX];

void init(int low, int high , int pos=0)
{
	if(low==high)
	{
		segTree[pos]=a[low];
		return;
	}

	int mid=(low+high)/2;
	init(low, mid, 2*pos+1);
	init(mid+1, high, 2*pos+2);

	segTree[pos]=segTree[2*pos+1]+segTree[2*pos+2];
}

int querry(int low, int high, int qlow, int qhigh, int pos=0)
{
	if(qlow>high || qhigh<low || low>high)	return 0;
	if(qlow<=low && qhigh>=high)			return segTree[pos];

	int mid=(low+high)/2;
	int x=querry(low, mid, qlow, qhigh, 2*pos+1);
	int y=querry(mid+1, high, qlow, qhigh, 2*pos+2);

	return x+y;
}

int main()
{
	string s;
	cin>>s;

	int m, n=s.length();
		cin>>m;

	for(int i=0 ; i<n-1 ; i++)
		a[i]=(s[i]==s[i+1]);

	init(0, n-2);


	while(m--)
	{
		int l, r;
		cin>>l>>r;
		cout<<querry(0, n-2, l-1, r-2)<<endl;
	}
}
