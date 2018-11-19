#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%I64d",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define INF                         (int)1e9
#define EPS                         1e-9
#define bitcount                    __builtin_popcount
#define gcd                         __gcd
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
#define MOD                         1000000007

using namespace std;
double res[6];
int main()
{
	cout<<setprecision(16);
	double h,m,s,t1,t2;
	scanf("%lf %lf %lf %lf %lf",&res[0],&res[1],&res[2],&res[3],&res[4]);
	
	res[1] = fmod(res[1] + (res[2]/60),60);
	res[0] = 5*fmod(res[0] + (res[1]/60),12);
	
	double left = 60,right = 60;
	
	res[3]*=5;
	res[4]*=5;
	
	for(int i=0;i<3;i++)
	{
		if(res[i] < res[3])
		{
			left = min(left , res[i] + 60 - res[3]);
			right = min(right , res[3] - res[i]);
		}
		else
		{
			left = min(left , res[i] - res[3]);
			right = min(right , 60 + res[3] - res[i]);
		}
	}
	double l_dist,r_dist;
	if(res[4] > res[3])
	{
		l_dist = res[4] - res[3];
		r_dist = 60 + res[3] - res[4];
	}
	else
	{
		l_dist = res[4] + 60 - res[3];
		r_dist = res[3] - res[4];
	}
	if(l_dist <= left || r_dist <= right)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}

