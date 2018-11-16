#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	char str[55];
	cin>>str;
	int len=strlen(str);
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(str[j]=='B'&&str[j+1]=='G')
			{
				str[j]='G';
				str[j+1]='B';
				j++;
			}
		}
	}
	cout<<str<<endl;
//	system("pause");
	return 0;
}