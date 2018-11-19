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
#include <limits>
#include <string>
#include <cassert>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;

#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x)
#define gl(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf("%s",x)

#define pis(x) printf("%d ",x)
#define pin(x) printf("%d\n",x)
#define pls(x) cout<<x<<" "
#define pln(x) cout<<x<<"\n"
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")

#define fs first
#define sc second

#define pb push_back

const int inv=1000000000;
const int minv=-inv;

int h,m,s,t1,t2;
double H,M,S,T1,T2;
bool cH,cM,cS;

int main()
{
	gi(h); gi(m); gi(s);
	if(h==12) h=0;

	gi(t1); gi(t2);
	if(t1==12) t1=0;
	if(t2==12) t2=0;
	if(t1>t2)
		swap(t1,t2);

	S = 360.0 * ((double)(s)) / 60.0;
	M = 360.0 * ((double)(m)) / 60.0 + 360.0 / 60.0 * ((double)(s)) / 60.0;
	H = 360.0 * ((double)(h)) / 12.0 + 360.0 / 12.0 * ((double)(m)) / 60.0 + 360.0 / 12.0 / 60.0 * ((double)(s)) / 60.0;

	T1 = 360.0 * ((double)(t1)) / 12.0;
	T2 = 360.0 * ((double)(t2)) / 12.0;

	cH = (T1<H and H<T2);
	cM = (T1<M and M<T2);
	cS = (T1<S and S<T2);

	if((cH and cM and cS) or (!cH and !cM and !cS))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}