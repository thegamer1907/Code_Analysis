#include <iostream>
using namespace std;
bool used[100000];
int main()
{	string s;
	cin>>s;
	int n;
	cin>>n;

	string d[150];
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
		if(d[i]==s)
		{
			cout<<"YES";return 0;
		}
	}
	bool first=false;
	for(int i=0;i<n;i++)
	{
		if(d[i][0]==s[1])
		{
			first=true;break;
		}	
	}
	bool second=false;
	for(int i=0;i<n;i++)
	{
		if(d[i][1]==s[0])
		{
			second=true;break;
		}	
	}
	if(second && first)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	


return 0;}