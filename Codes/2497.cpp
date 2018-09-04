                                    /* Pain. Anger. Hatred.
                                   Survive. Live. Win. Conquer.*/


#include<bits/stdc++.h>
using namespace std;
typedef long long LL ;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

#define ook order_of_key
#define fbk find_by_order
#define bug printf("TRUST\n");
#define pf printf
#define sf scanf
#define lp(i, n) for(int i = 0; i < n; i++)
#define rlp(n, i) for(int i = n - 1; i >= 0; i--)
#define bye vector<LL>
#define pb push_back
#define r0 return 0
#define ff first
#define ss second
#define mp make_pair
#define pii pair <int, int>
#define sz(a) ((int)a.size())
#define set0(a) memset ((a), 0 , sizeof(a))
#define set1(a) memset((a),-1,sizeof (a))
#define si(a) scanf("%d" , &a)
#define sl(a) scanf("%lld" , &a)
#define sii(a,b) scanf("%d %d" , &a , &b)
#define siii(a,b,c) scanf("%d %d %d" , &a , &b, &c)
#define sll(a,b) scanf("%lld %lld" , &a , &b)
#define slll(a,b,c) scanf("%lld %lld %lld" , &a , &b, &c)
#define FOR(i,a,b) for(LL i = (a) ; i <= (b) ; i++)
#define mod 1000000007
#define nod 200003

//using namespace __gnu_pbds;
//typedef tree < int, null_type ,less<int>,rb_tree_tag,tree_order_statistics_node_update > ordered_set;

const int N = 1e7 + 4;
vector <LL> v;
bool status[N + 3];
void siv()
{
	//int N=100999;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	for(int i = 1; i <= 3200; i++){
        if(!status[i]){
            v.pb(i);
        }
	}

}
LL a[N];
void findPrimeDivisors(LL x, LL cnt){
    for(LL i = 0; i < v.size(); i++){
        if(v[i] * v[i] > x)
            break;
        if(status[x] == false)
            break;
        bool fg = false;
        while(x % v[i] == 0){
            x /= v[i];
            fg = true;
        }
        if(fg)
            a[v[i]] += cnt;
    }
    if(x > 1){
        a[x] += cnt;
    }
}
LL c[N];
int main(){
//    ios_base::sync_with_stdio(0); cin.tie(0);
  //  system("COLOR F0");
    LL n, q, i,j = 0, temp, t, k, ans = 0, sum = 0, x, y, z, cnt = 0, m, fg = 0, mx = 0, mx1 = 0, mn = 8000000000000000000, mn1 = 8000000000000000000;
    siv();
    sl(n);
    while(n--){
        sl(x);
        c[x]++;
    }
    for(int i = 1; i <= 10000001; i++){
        if(c[i] > 0){
            findPrimeDivisors(i, c[i]);
        }
    }
    for(i = 1; i <= 10000001; i++){
        a[i] += a[i - 1];
    }
    sl(m);
    while(m--){
        sll(x, y);
        y = min(y, 10000001LL);
        x = min(x, 10000001LL);
        pf("%lld\n", a[y] - a[x - 1]);
    }
}
