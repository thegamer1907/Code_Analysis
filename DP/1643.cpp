#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
int changed=0;
int main()
{
	int n,i,flag=0;
	string str;
	size_t found;
	cin>>str;
	if((found=str.find("AB"))!=string::npos)
	{
		if(str.find("BA",found+2)!=string::npos)
		{
			cout<<"YES\n";
			return 0;
		}
	}
	if((found=str.find("BA"))!=string::npos)
	{
		if(str.find("AB",found+2)!=string::npos)
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}

