//#define debug
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<functional>
#include<iomanip>
#include<map>
#include<set>
#define pb push_back
#define dbg(x) cout<<#x<<" = "<<(x)<<endl;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll>PLL;
typedef pair<int,ll>Pil;
const ll INF = 0x3f3f3f3f;
const ll inf=0x7fffffff;
const double eps=1e-8;
const int maxn =1e6;
const int N = 510;
const ll mod=1e9+7;
const ll MOD=1e9;
//------
//define
char a[maxn][4]; 
//solve
void solve() {
	char p[2];
	int n;
	while(cin>>p>>n){
		int flag=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(flag)break;
			if(a[i][0]==p[0]&&a[i][1]==p[1]||a[i][1]==p[0]&&a[i][0]==p[1]){
				flag=1;
				break;
			}
			for(int j=i+1;j<n;j++){
				if(a[i][0]==p[1]&&a[j][1]==p[0]||p[0]==a[i][1]&&p[1]==a[j][0]){
					flag=1;
					break;
				}
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
//main
int main() {
	ios_base::sync_with_stdio(false);
#ifdef debug
	freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
	cin.tie(0);
	cout.tie(0);
	solve();
	/*
		#ifdef debug
			fclose(stdin);
			fclose(stdout);
			system("out.txt");
		#endif
	*/
	return 0;
}