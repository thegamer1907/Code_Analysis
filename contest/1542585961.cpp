#include<ctime>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath> 
#include<cstring> 
#include<cassert>
#include<string>
#include<sstream>
#include<fstream>
#include<deque>
#include<queue>
#include<vector>
#include<map>
#include<list>
#include<stack>
#include<set>
#include<bitset>
#include<iomanip>
#include<utility>
#include<functional>
#include<cctype>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<climits>
#include<clocale>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cwchar>
#include<cwctype>
#include<exception>
#include<locale>
#include<numeric>
#include<new>
#include<stdexcept>
#include<limits>
using namespace std;

#define ll long long
#define INF 1e9
#define rep(i,n) for(int (i)=0;(i)<n;i++)
#define REP(i,n) for(int (i)=1;(i)<=n;i++)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
#define pii pair<int,int>
#define sz(s) s.size()
#define all(s) (s.begin(),s.end())
inline void Fail(){
	printf("YES");
	exit(0);
}

const int maxn=1005;
int n,k;
int a[maxn];
int cnt[maxn];

int main(){
	scanf("%d%d",&n,&k);
	rep(i,n){
		int res=0;
		rep(j,k){
			int x;
			scanf("%d",&x);
			res=res*2+x;
		}
		cnt[res]++;
		if(!res)Fail();
	}
	rep(i,1<<k)rep(j,1<<k){
		if(i+j==(i^j)){
//			cout<<i<<" "<<j<<endl;
			if(cnt[i]&&cnt[j])Fail();
		}
	}
	printf("NO");
	return 0;
}
