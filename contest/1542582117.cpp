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
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define M           1000000007

const int maxn=1e7+100;

void solve(){
    int n,p,m,k,z,y,x;
    string s1; cin>>s1;
    si(n);
    int flag1=0,flag2=0;
    rep(i,1,n){
        string s2; cin>>s2;
        if(s1[0]==s2[1]) flag1=1;
        if(s1[1]==s2[0]) flag2=1;
        if(s1==s2) {cout<<"YES"<<endl; return;}
    }
    if(flag1==1 && flag2==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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