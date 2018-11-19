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

int arr[32];

void solve(){
    int n,p,m,k,z,y,x;
    si(n); si(k);
    rep(i,1,n){
       y=0;
       rep(j,0,k-1){
        si(x); 
        if(x) y+=(1<<j);
     }
     arr[y]++;
    }
    rep(i,0,20){
        rep(j,0,20){
            if((i&j)==0 && arr[i]>0 && arr[j]>0){
                puts("YES"); return;
            }
        }
    }
    puts("NO"); return;
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