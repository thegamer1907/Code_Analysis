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

int a[100010][4];
int row0[100010];
int col0[4];

PII solve(int* b){
	if(b[0]==0 && b[1]==0){
		return MP(0,1);
	}else if(b[0]==0 && b[2]==0){
		return MP(0,2);
	}else if(b[0]==0 && b[3]==0){
		return MP(0,3);
	}else if(b[1]==0 && b[2]==0){
		return MP(1,2);
	}else if(b[1]==0 && b[3]==0){
		return MP(1,3);
	}else if(b[2]==0 && b[3]==0){
		return MP(2,3);
	}else
		return MP(-1,-1);
}

PII other(PII x){
	if(x==MP(0,1)){
		return MP(2,3);
	}else if(x==MP(0,2)){
		return MP(1,3);
	}else if(x==MP(0,3)){
		return MP(1,2);
	}else if(x==MP(1,2)){
		return MP(0,3);
	}else if(x==MP(1,3)){
		return MP(0,2);
	}else if(x==MP(2,3)){
		return MP(0,1);
	}
}

int main()
{
#ifdef LOCALFILE
	freopen("in.txt","r",stdin);
#endif
	//freopen("out.txt","w",stdout);
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				row0[i]++;
				col0[j]++;
			}
		}
	}
	if(k==1){
		if(col0[0]>0){
			puts("YES");
			return 0;
		}else{
			puts("NO");
			return 0;
		}
	}else if(k==2){
		if(col0[0]>0 && col0[1]>0){
			puts("YES");
			return 0;
		}else{
			puts("NO");
			return 0;
		}
	}else if(k==3){
		if(col0[0]>0 && col0[1]>0 && col0[2]>0){
			bool flag=0;
			for(int i=0;i<n;i++){
				if(row0[i]>=2){
					puts("YES");
					return 0;
				}
			}
			puts("NO");
			return 0;
		}else{
			puts("NO");
			return 0;
		}
	}else{
		if(col0[0]>0 && col0[1]>0 && col0[2]>0 && col0[3]>0){
			bool flag=0;
			for(int i=0;i<n;i++){
				if(row0[i]>=3){
					puts("YES");
					return 0;
				}
			}
			set<PII> s;
			for(int i=0;i<n;i++){
				PII t=solve(a[i]);
				if(t.X!=-1){
					s.insert(t);
				}
			}
			for(set<PII>::IT it=s.begin();it!=s.end();it++){
				PII tt=other(*it);
				if(s.find(tt)!=s.end()){
					puts("YES");
					return 0;
				}
			}
			puts("NO");
			return 0;
		}else{
			puts("NO");
			return 0;
		}
	}
	return 0;
}
