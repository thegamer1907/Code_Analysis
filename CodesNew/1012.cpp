#include <iostream>

#include <map>

using namespace std;

map<string,int>val;

int main()
{
	ios::sync_with_stdio(false);

	int n,m,cmn=0;

	cin>>n>>m;

	string str;

	for(int i=0;i<n;i++)
	{
		cin>>str;

		val[str]++;
	}

	for(int j=0;j<m;j++)
	{
		cin>>str;

		if(val[str]>=1) cmn++;
	}

	n-=cmn;m-=cmn;

	if(n==m)
	{
		if(cmn%2==1) cout<<"YES"<<endl;

		else cout<<"NO"<<endl;
	}

	else if(n<m)cout<<"NO"<<endl;

	else cout<<"YES"<<endl;

	return 0;
}