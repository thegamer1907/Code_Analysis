#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define MOD 1000000007
#define pi 3.14159265358979
#define vi vector<int>
#define vc vector<char>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,m,i,j,c=0;
cin>>n;
vi b(n);
for(i=0;i<n;i++)
	cin>>b[i];
cin>>m;
vi g(m);
for(i=0;i<m;i++)
	cin>>g[i];
sort(b.begin(),b.end());
sort(g.begin(),g.end());
i=0,j=0;
while(i<n && j<m)
{
	int d=abs(b[i]-g[j]);
	if(d>=0 && d<=1)
	{
		c++;
		i++;
		j++;
	}
	else
	{
		if(b[i]>g[j])
			j++;
		else
			i++;
	}
}
cout<<c;
return 0;
}
