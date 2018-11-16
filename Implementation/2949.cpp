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
int a, b, c, d, n;
int main(){
	cin>>a>>b>>c>>d>>n;
	int ans=0;
	rep(i, 1, n+1){
		if(i%a==0||i%b==0||i%c==0||i%d==0)continue;
		ans++;
	}
	printf("%d\n", n-ans);
	return 0;
}
