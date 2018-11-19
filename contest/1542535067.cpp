#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char ch1[5];
char ch2[105][5];
int main()
{
	cin>>ch1;
	int n;
	cin>>n;
	int f=0;
	for(int  i=0;i<n;i++)
	{
		cin>>ch2[i];
		if(strcmp(ch1,ch2[i])==0)
		{
			f=1;
		}
	}
	if(f)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(ch2[i][1]==ch1[0])
			for(int j=0;j<n;j++)
			{
			//	cout<<"KKK"<<endl;
				if(ch2[j][0]==ch1[1])
				{
					f=1;
				}
			}
		}
		if(f)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
 } 