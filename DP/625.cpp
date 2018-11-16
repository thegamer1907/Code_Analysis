#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int q;
	cin >> q;
	int sum[100003];
	sum[1]=1;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]==s[i-1])
		{
			sum[i+1]=sum[i]+1;
		}
		else
		{
			sum[i+1]=sum[i];
		}
	}
	while(q--)
	{
		int x,y;
		cin >> x >> y;
		int numc=0;
		cout << sum[y]-sum[x] << endl;
	}
}