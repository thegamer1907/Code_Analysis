#include <bits/stdc++.h>
using namespace std;
/**************TEMPLATE***************************************************************************************************/
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)



/*************************************************************************************************************************/

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	string c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]==s){cout<<"YES"<<endl; return 0;}
		else 
		{
			for(int j=0;j<n;j++)
			{
				string p ="";
				p+=c [i][1];
				p+=c[j][0];
				if(p==s){cout<<"YES"<<endl; return 0;}
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}