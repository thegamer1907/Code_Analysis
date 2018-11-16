#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<map>
#include<ctime>
#include<set>
#include<queue>
#include<cmath>
#include<vector>
#include<bitset>
#include<functional>
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define REP(i,l,r) for((i)=(l);(i)<=(r);++(i))
#define REP2(i,l,r) for((i)=(l);(i)!=(r);++(i))
using namespace std;

typedef long long LL;
typedef double ld;

const int MAX=1000+10;

int n;
int a[MAX],sum[MAX];

int main()
{
	int i,j;
	scanf("%d",&n);
	REP(i,1,n)
	{
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	int ans=0;
	REP(i,1,n)
		REP(j,i,n)
			ans=max(sum[n]+j-i+1-2*(sum[j]-sum[i-1]),ans);
	cout<<ans<<endl;
	return 0;
}
