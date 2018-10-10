#include <bits/stdc++.h>
#define LL long long
#define Accel ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define Re(a,b) memset(a,b,sizeof a)
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ALL(X) (X).begin(), (X).end()
#define FOR(I, A, B) for (int I = (A); I <= (B); I++)
#define REP(I, N) for (int I = 0; I < (N); I++)
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define SZ(a) ((int)a.size())
using namespace std;
const int N=4e3+10;
int n;
LL k;
LL f(int n,LL k){
	if(n==1)return 1;
	LL a=1LL<<(n-1);
	if(k==a){
		return n;
	}
	if(k>a)
		return f(n-1,k-a);
	return f(n-1,k);
}
int main(){
	cin>>n>>k;
	cout<<f(n,k);
}
