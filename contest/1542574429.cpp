#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#define maxn 105
using namespace std;

int main()
{
	char a[2];
	while(cin>>a)
	{
		int n;
		cin>>n;
		char t[105][2]; 
		int flag;
		flag=0;
		for(int i=0;i<n;i++)
			cin>>t[i];
		for(int i=0;i<n;i++)
		{
			if(t[i][0]==a[0]&&t[i][1]==a[1])
			{
				flag=1;
				break;
			}
			if(t[i][1]==a[0])
			{
				for(int j=0;j<n;j++)
				{
					if(t[j][0]==a[1])
					{
						flag=1;
						break;
					}
				}
			}
			if(flag)
				break;
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	return 0;
}