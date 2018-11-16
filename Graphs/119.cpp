#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	int t;
	//char temp;
	cin>>n>>t;
	string str;
	cin>>str;
	for(i=0;i<t;i++)
	{
		for(j=0;j<n;)
		{
			if(str[j]=='B'&&str[j+1]=='G')
		{
			str[j]='G';
			str[j+1]='B';
			j+=2;
		}
		else
		j++;
	}
		
	}
	cout<<str;
}
