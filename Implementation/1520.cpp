#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int a;
	string x;
	while(cin>>x)
	{
		int count=1;
		for(int i=1;i<x.length();i++)
		{
			if(x[i]==x[i-1])
			{
				count++;
				if(count==7)
				{
					cout<<"YES"<<endl;
					return 0;
				}
			}
			else
			count=1;
		}
		cout<<"NO"<<endl;
	}
	return 0;
 } 
