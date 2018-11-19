#include <iostream>
using namespace std;

bool isSubstring(string stra, string strb)
{
	for(int i=0; i<stra.length()-1; i++)
	{
		if(strb[0] == stra[i] && strb[1] == stra[i+1]) return 1;

	}
	return 0;
}

int main()
{
	string pass;
	int n;
	cin>>pass>>n;
	string ltr[n];
	for(int i=0; i<n; i++)
	{
		cin>>ltr[i];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(isSubstring(ltr[i]+ltr[j], pass) || isSubstring(ltr[j]+ltr[i], pass))
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}