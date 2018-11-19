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

int flag[100];
void solve(){
    int n,p,k,z,y,x;
    int h,m,s,t1,t2;
    si(h); si(m); si(s); si(t1); si(t2);
    t1*=5; t1%=60;
    t2*=5; t2%=60;
    if(t1==t2){cout<<"YES"<<endl; return;}
    s%=60; m%=60;
    h*=5; h+=(m/12); h%=60;
    memset(flag,0,sizeof(flag));
    flag[m]=1; flag[s]=1; flag[h]=1;
    x=t1;
    int flag1=0;
    if(t1==h && (m!=0 || s!=0)){
        flag1=1;
    }
    if(t1==m && (s!=0)){
        flag1=1;
    }
    t1=(t1+1)%60;
    while(!flag1){
        if(t1==t2) {
            cout<<"YES"<<endl; return;
        }
        if(flag[t1]==1) break;
        t1=(t1+1)%60;
    }
    t1=x;
    if(t2==h && (m!=0 || s!=0)){
        cout<<"NO"<<endl; return;
    }
    if(t2==m && (s!=0)){
        cout<<"NO"<<endl; return;
    }
    t2=(t2+1)%60;
    while(1){
        if(t1==t2){
            cout<<"YES"<<endl; return;
        }
        if(flag[t2]==1) break;
        t2=(t2+1)%60;
    }
    cout<<"NO"<<endl;
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