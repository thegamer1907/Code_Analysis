#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long // LEMBRAR DE TROCAR CASO PROBLEMA DE MEMORIA
#define pii pair<int,int>
#define ieps (int) 1e6
#define eps (int) 1e9
#define mp make_pair
#define pb push_back



int32_t main(){
	/*ios::sync_with_stdio(false);
	cin.tie(0) , cout.tie(0);
	*/
	int n , m , k;
	cin>>n>>m>>k;
	if(n > m) swap(n , m);
	int l =  1 , r = n*m;
	int jjj = 0;
	while(l<=r){
		int mid = (l+r)/2;
		int conta = 0;
		int equal = 0;
		for(int i = 1 ; i <=n;i++){
			conta+= min(mid/i  , m);
			if(mid%i == 0 && mid/i <= m){
				conta--;
				equal++;
			}
		}
		if(conta < k && conta + equal >= k){
			cout<<mid<<endl;
			return 0;
		}
		if(conta + equal < k){
			l = mid + 1;
		}
		if(conta + equal >= k){
			r = mid - 1;
		}
	}
}