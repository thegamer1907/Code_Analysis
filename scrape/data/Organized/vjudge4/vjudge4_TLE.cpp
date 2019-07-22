#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rint register int
inline ll rf(){ll r;int s=0,c;for(;!isdigit(c=getchar());s=c);for(r=c^48;isdigit(c=getchar());(r*=10)+=c^48);return s^45?r:-r;}
ll p[100005], c = 1, A, m, k, R;
int main()
{
	rf(); m = rf(); k = rf(); generate(p+1,p+m+1,rf);
	for(rint i = 1, j; i <= m; c += j-i, i = j, A++)
		for(R = ((p[i]-c)/k+1)*k+c; j < R; j++);
	return !printf("%d\n",A);
}