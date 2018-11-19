//  
#include<bits/stdc++.h>
#define pb push_back 
#define mp make_pair
using namespace std;

const int maxn=1000;
typedef long long ll;

int n,m,ans;
int a[maxn];

int f[maxn];
int f2[maxn];

string s[maxn];

string s0;

int main()
{
	int i,j,k,T;
	cin>>s0>>n;
	for(i=1;i<=n;++i)
	{
		cin>>s[i];
		if(s[i]==s0)
		{
			return 0*printf("yes");
		}
		f[s[i][0]]++;
		f2[s[i][1]]++;
	}
	if(f[s0[1]]&&f2[s0[0]])
	{
		printf("yes");
	}
	else printf("no");
	
	return 0;
}
