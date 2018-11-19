#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ms(x,y) memset(x,y,sizeof(x))
using namespace std;

typedef long long ll;

const double pi = acos(-1.0);
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

	int f[100]={0};
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h*=5;
	t1*=5;
	t2*=5;
	h%=60;
	t1%=60;
	t2%=60;
	f[h]++;
	f[m]++;
	f[s]++;
	if(t1>t2)
	{
		swap(t1,t2);
	}
	int ans = 0;
	for(int i=t1;i<t2;i++)
	{
		ans+=f[i];
	}
	if(ans%3==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}