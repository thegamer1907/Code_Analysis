// http://codeforces.com/problemset/problem/266/B
#include<iostream>

using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	char c[n], next[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		next[i] = c[i];
	}

	while(t--)
	{
		for(int i=0;i<n-1;i++)
		{
			if(c[i] == 'B' && c[i+1] =='G')
			{
				next[i] = 'G';
				next[i+1] = 'B';
			}
		}
		for(int i=0;i<n;i++)
		{
			c[i] = next[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<next[i];
	}
	cout<<endl;
	return 0;
}