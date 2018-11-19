#include <bits/stdc++.h> 

using namespace std;

char a[10],b[105][10];

int main()
{
	int n = 0;
	cin>>a;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cin>>b[i];
	}
	int book = 0,l = 0,r = 0;
	for(int i = 0;i < n;i++)
	{
		if((b[i][0] == a[1] && b[i][1] == a[0]) || (b[i][0] == a[0] && b[i][1] == a[1]))
		{
			book = 1;
			break;
		}
		if(b[i][0] == a[1])
		{
			r = 1;
		}
		if(b[i][1] == a[0])
		{
			l = 1;
		}
		if(r == 1&&l == 1)
		{
			book = 1;
			break;
		}
	}
	if(book == 1)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}