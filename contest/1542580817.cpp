#include <bits/stdc++.h>
#include <cstdlib>
#include <stdint.h>
typedef long long ll;
typedef unsigned long long ull;
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
using namespace std;
int a[45000];
int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
//	freopen("A-small-practice.in", "r", stdin);
//	freopen("ou	tput.txt", "w", stdout);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=(h*5*60*12)+(m*5*12)+s;
	m=(m*60*12)+(s*12);
	s=s*60*12;
	h%=43200;
	m%=43200;
	s%=43200;
	a[h]=a[m]=a[s]=1;

	t1=t1*60*12*5;
	t1%=43200;
	t2=t2*60*12*5;
	t2%=43200;
	bool k=true;
	for(int i=min(t1,t2)+1;i<max(t1,t2);i++)
	{
		if(a[i]==1)
		{
			k=false;
			break;
		}
	}
	if(k)
	{
		cout<<"YES\n";
		return 0;
	}
	k=true;
	for(int i=0;i<min(t1,t2);i++)
	{
		if(a[i]==1)
		{
			k=false;
			break;
		}
	}
	for(int i=max(t1,t2)+1;i<45000;i++)
	{
		if(a[i]==1)
		{
			k=false;
			break;
		}
	}
	if(k)
	{
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}


