
#include <bits/stdc++.h>
using namespace std;

#define sd(x) 		scanf("%d",&x)
#define su(x) 		scanf("%u",&x)
#define slld(x) 	scanf("%lld",&x)
#define sc(x) 		scanf("%c",&x)
#define ss(x) 		scanf("%s",x)
#define sf(x) 		scanf("%f",&x)
#define slf(x)		scanf("%lf",&x)
#define ll 			long long int
#define mod(x,n) 	(x+n)%n
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
ll mod = 1000000007;

char s[107][17];
char p[17];

int main()
{
	// freopen("input_file_name.in","r",stdin);
	// freopen("output_file_name.out","w",stdout);

	// int i,j,k,l,m,n,x,y,z,a,b,r;
	ll i,j,k,l,m,n,q,x,y,z,a,b,r;

	ss(p);
	slld(n);
	for(i=0;i<n;i++)
	{
		ss(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if( (s[i][0]==p[0] && s[i][1]==p[1]) )
		{
			printf("YES\n");
			return 0;
		}
		for(j=0;j<n;j++)
		{
			if( (s[i][1]==p[0] && s[j][0]==p[1]) )
			{
				printf("YES\n");
				return 0;			
			}
		}
	}

	printf("NO\n");
	return 0;
}
