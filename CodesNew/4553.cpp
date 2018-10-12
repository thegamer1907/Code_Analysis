#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int INF = 1e9;
const int N = 1e6;

int n;
vi lst;

bool check(int x){
	int idx=n-1 - x, i;
	for(i=1;i<=x;i++){
		while(idx>=0 && lst[n-i] < 2*lst[idx]) idx--;
		if(idx==-1) return false;
		idx--;
	}
	return i>x;
}

int main(){
	int x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		lst.pb(x);
	}
	sort(lst.begin(), lst.end());
	
	int lo=0, hi=n, mid, ans;
	while(lo<=hi){
		mid = (lo+hi)/2;
		if(check(mid)){
			ans = (n-mid);
			lo = mid+1;
		}
		else hi = mid-1;
	}
	printf("%d\n",ans);
	return 0;
}
