#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
#define sz(a) (int)a.size()
#define de(a) cout<<#a<<" = "<<a<<endl
#define dd(a) cout<<#a<<" = "<<a<<" "
#define all(a) a.begin(), a.end()
typedef long long ll;
typedef double db;
typedef pair<int, int> pii;
typedef vector<int> vi;
//----
const int N=101;
int n;
int ma, mi;
int a[N];
int main(){
	scanf("%d", &n);
	rep(i, 0, n)scanf("%d", a+i);
	rep(i, 0, n)if(a[i]>a[ma])ma=i;
	rep(i, 0, n)if(a[i]<=a[mi])mi=i;
	int ans=ma+n-1-mi;
	if(ma>mi)ans--;
	printf("%d\n", ans);
	return 0;
}
