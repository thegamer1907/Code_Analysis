#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(int i=1;i<n;i++)
		{
			if(s[i]=='G' && s[i-1]=='B')
			 {
			 	char t=s[i];
			 	s[i]=s[i-1];
			 	s[i-1]=t;
			 	i++;
			 }
		}
	}
	cout<<s;
}