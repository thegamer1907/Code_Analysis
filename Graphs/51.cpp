#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b;
	string s;
	char temp;
	while(cin>>a>>b)
	{
		cin>>s;
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<a-1;j++)
			{
				if(s[j]=='B' && s[j+1]=='G')
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
					j++;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
 } 
