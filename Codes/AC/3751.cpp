#include <bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define bitcount    __builtin_popcountll
#define si(x)       scanf("%d",&x)
#define su(x)       scanf("%u",&x)
#define sll(x)      scanf("%lld",&x)
#define sl(x)       scanf("%ld",&x)     
#define sc(x)       scanf("%c",&x)
#define ss(x)       scanf("%s",x)
#define sf(x)       scanf("%f",&x)
#define slf(x)      scanf("%lf",&x)
#define pri(x)      printf("%d\n",x)
#define prl(x)      printf("%lld\n",x)
#define ll          long long int
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define pll         pair<long long,long long>
#define pil         pair<int,long long>
#define pli         pair<long long,int>
#define vi          vector<int>
#define vl          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define repl(i,a,b) for(long long i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define rrepl(i,a,b) for(long long i=a;i>=b;i--)
#define M           1000000007

const ll maxn=1e13+100;
string s;
ll pb,ps,pc,nb,ns,nc,cb,cs,cc;
ll amount;

bool check(ll total){
    ll need_b=total*cb,need_s=total*cs,need_c=total*cc;
    need_b=max(0ll,need_b-nb);
    need_s=max(0ll,need_s-ns);
    need_c=max(0ll,need_c-nc);
    ll money=need_b*pb+need_s*ps+need_c*pc;
    return (amount>=money);
}


ll srch(ll low,ll high){
    if(high>=low){
        ll mid=low+(high-low)/2;
        if(check(mid) and (mid==high or !check(mid+1))) return mid;
        if(check(mid)) return srch(mid+1,high);
        return srch(low,mid-1);
    }
    return 0;
}
void solve(){
    
    cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    cin>>amount;
    rep(i,0,sz(s)-1){
        if(s[i]=='B') cb++;
        if(s[i]=='S') cs++;
        if(s[i]=='C') cc++;
    }

    cout<<srch(0,maxn-1)<<endl;

}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=1;
    //si(t);
    while(t--){
        solve();
    }
    
    return 0;
}