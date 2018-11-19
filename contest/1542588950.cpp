#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#define pb push_back
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define Rep(i,x) for(int i=head[x];i+1;i=nxt[i])
#define rep2(i,a,b) for(int i=(a);i<(b);i++)
#define ff first
#define ss second
using namespace std;
const int N=200005;
const int inf=1e9+7;
typedef long long ll;
//------------------------------------------head---------------------------------------------------//
int main()
{
	int x,y,z,a,b;scanf("%d%d%d%d%d",&x,&y,&z,&a,&b);
	if(a==12) a=0;if(b==12) b=0;
	int p1,p2,p3,p4,p5;
	p1=120*30*x+120/2*y+120/120*z;p2=120*6*y+120/10*z;p3=120*6*z;p4=120*30*a;
	p5=120*30*b;p1%=43200;p2%=43200;p3%=43200;p4%=43200;p5%=43200;
	vector<int> p;p.clear();
	p.pb(p1);p.pb(p2);p.pb(p3);p.pb(p4);p.pb(p5);
	sort(p.begin(),p.end());
	p.pb(p[0]);
	rep(i,0,5)
	{
		if((p[i]==p4 && p[i+1]==p5) ||(p[i]==p5 && p[i+1]==p4))
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
