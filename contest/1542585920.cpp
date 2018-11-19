#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define preturn(X) cout<<X<<endl; return 0
typedef long long ll;
const ll MOD = 1e9+7;
//cout.setf(ios::fixed); cout.precision(18)

int cnt[16];
int n,k;


int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
	cin>>n>>k;
	int lim = pow(2,k);
	int x;
	rep(i,0,n){
		int num = 0;
		rep(j,0,k){
			num*=2;
			cin>>x;
			num+=x;
		}
		cnt[num]++;
	}   
	if(cnt[0]!=0){
		preturn("YES");
	}       
	rep(i,0,lim){
		rep(j,0,lim){
			if(i!=j){
				if(cnt[i]!=0 && cnt[j]!=0 && (j&i)==0){
					preturn("YES");
				}
			}
		}
	}
	preturn("NO");
}