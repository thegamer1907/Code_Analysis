#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	char s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	char tmp;
	while(t--)
	{
		for(int i=0;i<n;)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				tmp=s[i+1];
				s[i+1]=s[i];
				s[i]=tmp;
				i+=2;
				
			}
			else
			i++;
			
		}
	}
	for(int i=0;i<n;i++)
	cout<<s[i];
}