/*
	Dear to me is sleep: still more, being made of stone,
	While pain and guilt still linger here below,
	Blindness and numbness--these please me alone;
	Then do not wake me, keep your voices low.
*/
#include	<iostream>
#include	<cstdio>
#include	<vector>
#include 	<set>
#include	<map>
#include	<queue>
#include	<stack>
#include	<algorithm>
#include	<cstring>
#include	<cfloat>
#include	<cmath>
#include	<cassert>
#include	<locale>
#include	<string>
#include	<bitset>
//#include	<ratio>
#include	<functional>
#include	<climits>
using namespace std;

#define read(x)     freopen(x,"r",stdin)
#define write(x)    freopen(x,"w",stdout)
#define cl(a,b)	    memset(a,b,sizeof(a))
#define all(x)      x.begin(),x.end()
#define rall(x)     x.rbegin(),x.rend()
#define ll          long long
#define vec         vector
#define vi          vec<int>
#define heap        priority_queue
#define res         reserve
#define pb          push_back
#define f(x,y,z)    for(int x=(y); x<(z); x++)
#define fd(x,y,z)   for(int x=(y); x>=(z); x--)
#define fit(x,y)    for(auto x: y)
#define srt(x)      sort(all(x))
#define rsrt(x)     sort(rall(x))
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
#define pii         pair<int,int>
#define ppi         pair<pii,int>
#define pip         pair<int,pii>
#define mp          make_pair
#define f1          first
#define s2          second
#define cdbg(x)     cerr<<#x<<" = "<<x<<",\t";
#define cdbl        cerr<<"\n----------\n";
#define pow2(x)     ((x)*(x))
#define edist(x1, y1, x2, y2) (sqrt((pow2(x1-x2)+pow2(y1-y2))))
#define mdist(x1, y1, x2, y2) (abs((x1)-(x2))+abs((y1)-(y2)))
#define y1          FullSensei
#define mid         ((ss+se)>>1)
#define left        (si<<1)
#define right       ((si<<1)+1)
#define pi          3.141592653589793
#define popcount    __builtin_popcount
#define spc	' '
#define endl	'\n'
bool checkbit(int x, int y){return (x&(1<<y));}
int setbit(int x, int y){return (x^(1<<y));}
const int dirs[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int mod=(1e9+7);
const int INF=(0x7fffffff);
const int maxn=1e5+7;
int a[maxn];
ll b[maxn];
int n, s;
ll fun(int k){
    f(i,1,n+1)
        b[i]=a[i]+((ll)i*k);
    sort(b+1,b+n+1);
    ll sum=0;
    int cnt=0;
    for(int i=1; cnt<k && sum<=s; i++){
            //cout<<i<<spc<<cnt<<spc<<sum<<spc<<b[i]<<endl;
        if(sum+b[i]<=s){
            sum+=b[i];
            cnt++;
        }
        else    break;
    }
    if(cnt==k)
        return sum;
    return -1;
}
int main(){
	cin>>n>>s;
	f(i,1,n+1)	scanf("%d",&a[i]);
	int jump=1;
	while(jump*2<=n)    jump*=2;
	int si=0;
	for(; jump>0; jump/=2){
            //cout<<si<<" "<<jump<<" "<<"<>"<<endl;
        if(si+jump>n)   continue;
        if(fun(si+jump)!=-1){
            si=si+jump;
        }
	}
	/* gather si objects*/
	cout<<si<<spc<<fun(si)<<endl;
	return 0;
}
