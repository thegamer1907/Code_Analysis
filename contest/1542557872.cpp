#include <bits/stdc++.h>
using namespace std;
#define XINF INT_MAX
#define INF (0x3f3f3f3f)
#define MAXN (0x7fffffff)
#define eps (1e-10)
#define zero(a) (fabs(a)<eps)
#define sqr(a) ((a)*(a))
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define PF(X) push_front(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
#define PI  acos(-1.0)
#define test puts("OK");
#define lowbit(X) (X&(-X))
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef pair<int,int> PII;
typedef priority_queue<int,vector<int>,greater<int> > PQI;
typedef vector<PII> VII;
typedef vector<int> VI;
#define X first
#define Y second

int main()
{
#ifdef LOCALFILE
	freopen("in.txt","r",stdin);
#endif
	//freopen("out.txt","w",stdout);
	int h,m,s,t1,t2;
	while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)){
		t1%=12;
		t2%=12;
		h%=12;
		double pt1=30.0*t1;
		double pt2=30.0*t2;
		double ps=6.0*s;
		double pm=0.1*s+6.0*m;
		double ph=1.0*s/120.0+0.5*m+30.0*h;
		double m1=min(pt1,pt2);
		double m2=max(pt1,pt2);
		double m3=m1+360.0;
		// printf("%.2f %.2f %.2f %.2f %.2f\n",pt1,pt2,ph,pm,ps);
		bool f1=(ph>m1 && ph<m2 && pm>m1 && pm<m2 && ps>m1 && ps<m2);
		bool f2=(((ph>m2 || ph<m1) && (pm>m2 || pm<m1) && (ps>m2 || ps<m1)));
		if(f1 || f2){
			puts("YES");
		}else{
			puts("NO");
		}
	}
	return 0;
}
