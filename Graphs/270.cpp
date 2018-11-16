#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string s;
	int i,j;
	cin>>i;
	cin>>j;
	cin>>ws>>s;
	for(;j>0;j--)
	for(i=s.length()-1;i>0;i--)
		if(s[i]=='G'&&s[i-1]=='B')
		{
			s[i]='B';
			s[i-1]='G';
			i--;
		}
	cout<<s;
	return 0;
}