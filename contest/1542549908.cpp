#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <stack>
using namespace std;
typedef long long LL;
const int Maxn = 10000 + 5;
const int inf = 1 << 30;
const LL Inf = 1LL << 60;
int n,m;

int main ()
{
	double a,b,c,d,e;
	int flag = 0;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	b = b/60*12;
	c = c/60*12;
	if (b>0 || c>0)
		a+=0.1;
		if (c>0)
			b+=0.1;
	double r,l;
	r = (d>e)?d:e;
	l = (d<e)?d:e;
	if (r>=a&&l<=a && r>=b&&l<=b && r>=c&&l<=c)
		flag = 1;
	if ((r<=a||(r-l<=r-a))&&(l>=a||(a-l>=a-r)) && (r<=b||(r-l<=r-b))&&(l>=b||(b-l>=b-r)) && (r<=c||(r-l<=r-c))&&(l>=c||(c-l>=c-r)))
		flag = 1;
	if (flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}
		 		 	 					 		 	 			 	   		