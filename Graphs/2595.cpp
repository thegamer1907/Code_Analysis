/*
 
I don't know when to give up
-Naruto uzumaki
 
*/
 
#include <bits/stdc++.h>
#include <unordered_map>
 
#define set(p) memset(p,-1,sizeof(p))
#define clr(p) memset(p,0,sizeof(p))
#define ll long long int
#define llu unsigned long long int
#define si(n)                   scanf("%d",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                                   scanf("%s",n)
#define rep(i,a,n) for(i=(a);i<(n);i++)
#define pii pair<int,int>
#define pb(x) push_back(x)
#define v(x) vector<x>

using namespace std;
 
ll gcd(ll a,ll b)
{
 ll r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
 
 
ll power(ll x,ll y)
{
    ll temp,ty,my;
    ll mod;
    mod=1000000007;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    ty=(temp%mod)*(temp%mod);
    if (y%2 == 0)
    {
        return ty%mod;
    }
    else
    {
        my=(x%mod)*(ty%mod);
        return my%mod;
    }
}

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}
 
ll mini(ll a,ll b)
{
        return a<b?a:b;
}
 
ll maxi(ll a,ll b)
{
        return a>b?a:b;
}
 
struct abhi
{
       ll val1;
       ll val2;
       ll po;
};
 
struct abhi brr[1000001];
 
bool cmp(struct abhi x,struct abhi y)
{
    if(x.val1==y.val1)
        return x.val2<y.val2;
    return x.val1<y.val1;
}

//for custom priority queue priority_queue< Abhi, vector<Abhi>, Compare)

// struct Compare
// {
//     bool operator()(const Abhi &p1, const Abhi  &p2){
//         return p1.first < p2.first;
//     }
// };
 
 
void fastscan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

// ll mod = 1000000007;
 
ll ar[50100];
ll col[50100];
ll visited[50100];

vector<ll> vec[10010];

ll cn;

void dfs(ll root, ll n, ll pcolor){
    //cout<<root<<" "<<pcolor<<"\n";
    // if(visited[root]==0){

        // cout<<root<<" visited"<<"\n";

        visited[root]=1;
        ll i;
        rep(i,0,vec[root].size()){
            ll node  = vec[root][i];

            if(visited[node]==0){

            //cout<<root<<" "<<node<<" "<<pcolor<<" "<<ar[node]<<"\n";
                col[node]=pcolor;

                if(ar[node]==col[node]){

                    dfs(node, n, ar[node]);
                    //continue;
                }else{

                    //cout<<root<<" "<<node<<" "<<pcolor<<" "<<ar[node]<<"\n";
                    col[node]=ar[node];
                    cn++;
                    dfs(node, n, ar[node]);
                }
        }

        //}

    }

    return;



}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,j,k,m,n,q;
    cin>>n;

    rep(i,0,n-1){
        ll po;
        cin>>po;

        vec[i+2].push_back(po);
        vec[po].push_back(i+2);
    }

    rep(i,1,n+1){
        col[i]=0;
        cin>>ar[i];
    }

    memset(visited, 0 ,sizeof(visited));
    cn = 1;
    col[1]=ar[1];

    dfs(1,n, col[1]);

    cout<<cn<<"\n";

    
    return 0;
}