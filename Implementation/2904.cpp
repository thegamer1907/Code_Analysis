#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define RDI(A) int A; scanf("%d", &A);
#define RDII(A, B) int A, B; scanf("%d %d", &A, &B);
#define RDIII(A, B, C) int A, B, C; scanf("%d %d %d", &A, &B, &C);
#define RDL(A) ll A; scanf("%lld", &A);
#define RDLL(A, B) ll A, B; scanf("%lld %lld", &A, &B);
#define RDLLL(A, B, C) ll A, B, C; scanf("%lld %lld %lld", &A, &B, &C);
#define SZ(X) ((int)X.size() )
#define ALL(I) (I).begin(), (I).end()
#define MAXN 200005
#define mod 1000000007
typedef pair<int,int> P;
#define X first
#define Y second

int main(){
	RDI(n);
	int a[105];
	int MAX = 0;
	int ma,mi;
	int MIN = INT_MAX;
	FI(i,n){
		cin >> a[i];
		if(a[i] > MAX){
			ma = i;
			MAX = a[i];
		}
		if(a[i] <= MIN){
			mi = i;
			MIN = a[i];
		}
	}
	if(ma > mi){
		cout << ma+n-mi - 2;
	}else{
		cout << ma+(n-1-mi);
	}
}
