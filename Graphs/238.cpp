#include <iostream>
using namespace std;

int main() {
	int n,t,temp;
	cin>>n;
	cin>>t;
	char s[10000];
	for(int x=0; x<n; x++)
	{
		cin>>s[x];
	}
	for(int i=0; i<t; i++)
	{
	for(int y=0; y<n; y++)
	{
		if(s[y]=='B' && s[y+1]=='G')
		{
			temp= s[y];
			s[y]=s[y+1];
			s[y+1]=temp;
			y++;
			
		}
		
	}
	
	}
	for(int j=0; j<n; j++)
	{
		cout<<s[j];
	
	}
}