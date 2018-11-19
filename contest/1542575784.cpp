#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
#define F first
#define S second
#define sz(A) (int)A.size()
set<vector<int> > s;
set<int> temp;
set<int>::iterator it1, it2;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,k,x,y,n;

	sd(n);
	sd(k);

	for(i=0;i<n;i++)
	{
		for(y=0,j=0;j<k;j++)
		{
			sd(x);
			y|= (x<<j);
		}
		temp.insert(y);
	}

	for(it1=temp.begin();it1!=temp.end();it1++)
	{
		for(it2=temp.begin();it2!=temp.end();it2++)
		{
			if(((*it1)&(*it2))==0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}

	printf("NO\n");
    return 0;
}
