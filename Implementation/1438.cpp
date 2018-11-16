#include <iostream>
using namespace std;
int main()
{
	int i,i1,j,k;
	string s;
	cin>>j>>k;
	cin>>s;
	for(i=0;i<k;i++)
	{
		for(i1=0;i1<s.size()-1;i1++)
		{
			if(s[i1]=='B' && s[i1+1]=='G')
			{
				s[i1]='G';
				s[i1+1]='B';
				i1++;
			}
		}
	}
	cout<<s;
}