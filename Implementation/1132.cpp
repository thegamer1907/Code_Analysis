#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define desync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define ms(v,x) memset(v,x,sizeof(v))
using namespace std;
int32_t main(){
	int Q,T;
	cin >> Q >> T;
	string a;
	cin >> a;
	while(T--){
		for(int i=0;i<Q-1;i++){
			if(a[i]=='B' && a[i+1]=='G'){swap(a[i],a[i+1]);i++;}
		}
	}
	cout << a << endl;
}