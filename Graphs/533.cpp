#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int time;
	cin>>time;
	string s;
	cin>>s;
	for(int i=1;i<=time;i++)
	{
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='B'&&s[j+1]=='G')
			{
				s[j]='G';
				s[j+1]='B';
				j=j+1;
			}
		}
	}
	cout<<s;
	// your code goes here
	return 0;
}