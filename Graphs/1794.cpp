#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	/*
	4
	1 4 6 2
	5
	5 1 5 7 9

	1 2 4 6
	1 5 5 9
	*/
	int n;
	cin>>n;
	int s[n];
	for(int a=0;a<n;a++) cin>>s[a];
	int m;
	cin>>m;
	int p[m];
	for(int a=0;a<m;a++) cin>>p[a];
	sort(s,s+n);
	sort(p,p+m);
	int l=0,c=0;
	for(int a=0;a<n;a++)
	{
		for(int b=0;b<m;b++)
		{
			if(abs(s[a]-p[b])==1 || abs(s[a]-p[b])==0)
			{
				p[b]=-500;
				c++;
				break;
			}
		}
	}
	cout<<c;
	return 0;
}
