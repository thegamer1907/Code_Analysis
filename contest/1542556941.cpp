#include <iostream>
#include <string>


using namespace std;

string a[200];

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	bool b=0 , c=0;
	for (int i=0 ; i<n ; i++)
	{
		cin>>a[i];
		if (a[i]==s)
		{
			cout<<"YES";
			return 0;
		}
		if (a[i][1]==s[0])
			b=1;
		if (a[i][0]==s[1])
			c=1;
	}
	if (b && c)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}