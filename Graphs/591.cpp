#include <iostream>
using namespace std;
int main()
{
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
		for(unsigned int i=1;i<s.size();i++)
		{
			if(s[i-1]=='B' and s[i]=='G') swap(s[i-1],s[i]), i++;
		}
	}
	cout<<s;
	return 0;
}