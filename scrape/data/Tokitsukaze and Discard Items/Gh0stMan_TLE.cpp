/*****************Bismillahir Rahmanir Rahim***********************/

#include<bits/stdc++.h>
using namespace std;

/************************Start Of Template*************************/

/******** Mahin Shefat - GhOstMan *************/


#define     pb              push_back
#define     popb            pop_back
#define     ll              long long int
#define     ull             unsigned long long int
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define     MOD             1000000007
#define     f               first
#define     s               second
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     mp              make_pair
#define     check           printf("check")
#define     sqr(x)          (x)*(x)
#define     all(v)          v.begin(),v.end()
#define     fast            ios_base::sync_with_stdio(0);cin.tie(0)
#define     pii             pair<int,int>
#define     Pair            pair<ll,ll>
#define     MAX             1000000000000014
#define     MIN             -1000000000000014
#define     endl            '\n'
#define     Fread           freopen("inputdur.txt","r",stdin)
#define     Fwrite          freopen("output.txt","w",stdout)

/************************End Of Template*************************/
ll arr[200005];
int main(){
	
	ll n , m , k;
	ll tot = 0;
	cin >> n >> m >> k;
	for(int i = 1; i <= m; i++){
		cin >> arr[i];
	}
	sort(arr + 1 , arr + m + 1);
	int idx = 1;
	ll rng = k;
	ll ans = 0;
	while(idx <= m){
		int cnt = 0;
		int i;
		for(i = idx; i <= m; ){
			if(arr[i] <= rng) i++ , cnt++;
			else break;
		}
		//cout << cnt << " " << i << " " << idx << endl;
		if(cnt > 0) ans++;
		tot = cnt;
		idx = i;
		if(cnt > 0){
			rng += tot;
		}else rng += k;
	}
	cout << ans << endl;
	return 0;
}