#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<"="<<x<<endl
#define RD(x) freopen((x),"r",stdin)
#define WT(x) freopen((x),"w",stdout)
#define pii pair<int,int>
#define PQ priority_queue
#define ll long long
#define pb push_back
#define mp make_pair
const int INF=0x7fffffff;

int n,k,a[17],s,x;

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>k;
	while(n--){
		s=0;
		for (int i=0;i<k;i++){
			cin>>x;
			s+=x<<i;
		}
		a[s]=1;
	}
	for (int i=0;i<(1<<k);i++){
		for (int j=0;j<(1<<k);j++){
			if (!(i&j) && a[i] && a[j]){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
