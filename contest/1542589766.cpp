#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define PI 3.14159265
using namespace std;
const int maxn=1e2+5;
const int inf=0x3f3f3f3f;
int n;
string a[maxn],b;
int main()
{	
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			cout<<"yes"<<endl; return 0;
		}
	} 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string tmp1;
			tmp1="";
			tmp1+=a[i][1];
			tmp1+=a[j][0];
			if(tmp1==b)
			{
				cout<<"yes"<<endl; return 0;
			}
		}
	}
	cout<<"NO"<<'\n';
	
	return 0;
}