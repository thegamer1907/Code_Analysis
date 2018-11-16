#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	int n,m,i;
	cin>>n>>m>>a;
	while(m--)
		for(i=0;i<a.length()-1;i++)
		{
			if(a[i]=='G')
				continue;
			if(a[i+1]=='G')
			{
				a[i]='G';
				a[i+1]='B';
				i++;
			}
		}
	cout<<a;
	return 0;
}