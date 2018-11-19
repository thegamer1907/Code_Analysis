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

string strs[110];

int main()
{
#ifdef LOCALFILE
	freopen("in.txt","r",stdin);
#endif
	//freopen("out.txt","w",stdout);
	string s;
	int n;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>strs[i];
	}
	for(int i=0;i<n;i++){
		if(strs[i][0]==s[0] && strs[i][1]==s[1]){
			puts("YES");
				return 0;
		}
		for(int j=0;j<n;j++){
			if(strs[i][1]==s[0] && strs[j][0]==s[1]){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
