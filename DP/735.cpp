#include<iostream>
using namespace std;
typedef long long int ll;
ll ar[100100];
int main()
{
	string s;
	ll m,l,r;
	cin>>s>>m;

	for(ll i=0;i<s.length()-1;i++)
	{
		ar[i+1]=ar[i]+ (s[i]==s[i+1]);
	}
	while(m--)
	{
		cin>>l>>r;
		cout<<ar[r-1]-ar[l-1]<<endl;
	}
	return 0;
}