#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define REPP(i,a,b,c) for(int i=a; i<=b; i+=c)
#define REP(i,a,b) REPP(i,a,b,1)
#define REVV(i,a,b,c) for(int i=a; i>=b; i-=c)
#define REV(i,a,b) REVV(i,a,b,1)
#define FOR(i,a) REP(i,0,a-1)
#define FORD(i,a) REV(i,a-1,0)

const int N = 100005;
int a[N], l[N];
int cnt[N];
int ans[N];

struct data{
	int l, idx;
}dat[N];

bool cmp(data a, data b){
	if(a.l < b.l) return true;
	return false;
}

int main(){
	int n,m;
	cin >> n >> m;
	REP(i,1,n) cin >> a[i];
	REP(i,1,m){
		cin >> dat[i].l;
		dat[i].idx = i;
	}
	sort(dat+1,dat+m+1,cmp);
	int ct = 0;
	REV(i,n,dat[1].l){
		if(cnt[a[i]] == 0){
			ct++;
		}
		cnt[a[i]]++;
	}
	ans[dat[1].idx] = ct;
//	REP(i,1,n){
//		printf("%d ",cnt[a[i]]);
//	}
//	puts("");
	REP(i,2,m){
		REP(j,dat[i-1].l,dat[i].l-1){
//			printf("%d ",cnt[a[j]]);
			if(cnt[a[j]] == 1){
				ct--;
			}
			cnt[a[j]]--;
		}
//		puts("");
		ans[dat[i].idx] = ct;
	}
	REP(i,1,m){
		cout << ans[i] << endl;
	}
	return 0;
}
