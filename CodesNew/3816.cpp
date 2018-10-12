#include<bits/stdc++.h>



#define fill(A, val) memset(A,val,sizeof(A))
#define rep(i, a, n) for (int (i)=a;(i)<n;++(i))
#define per(i, n, a) for (long long (i)=n-1;(i)>=a;--(i))
#define all(V) V.begin(),(V).end()
#define sz(V) (int)(V).size()
#define pb push_back
#define ff first
#define ss second
#define ret return
#define tr true
#define fl false
#define mp make_pair
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<string,int> si;                    
const double eps = 1e-8;                        
const double Pi = 3.14159265358979323846264338327950288419716939937510;
const long long INF = 1LL << 61;
const long long MAX3 = 1005;
const long long MAX4 = 10005;
const long long MAX5 = 100005;
const long long MAX6 = 1000005;
const long long MOD = 1e9 + 7;
const long long N = (int)1e6+322;
const int Grn = 10000;
const int inf = 1e9 + 123;
/*
void build_tree(int v, int tl, int ttr) {
    if (tl == ttr) {
        tree[v] = a[tl];
    } else {
        int ttm = (tl + ttr) / 2;
        build_tree(v * 2, tl, ttm);
        build_tree(v * 2 + 1, ttm + 1, ttr);
        tree[v] = (tree[v * 2]+tree[v * 2 + 1]);
    }
}
*/
/*
int sum(int l, int r, int v, int tl, int ttr) {
   if (tl >= l && ttr <= r) {
      return tree[v];     
    }
     if(tl>r||ttr<l)return 0;
    int ttm = (tl + ttr) / 2;
    return (sum(l, r, v * 2,tl,ttm)+sum(l, r, v * 2 + 1, ttm + 1, ttr));
}
void update(int l,int r, int v, int pos,int val){
 if(l==r){
  tree[v]=val;
 }else{
  int mid = (l+r)/2;
     if(pos<=mid){
    update(l,mid,v*2,pos,val);
  }else{
   update(mid+1,r,v*2+1,pos,val);
   
}
 tree[v] = tree[v*2]+tree[v*2+1];
 }

   
}
*/
long long n,a[111111],sum,mx = -1;
int main()
{
cin>>n;
for(int i = 1; i <= n; ++ i){
	cin>>a[i];
	sum+=a[i];
	mx = max(mx,a[i]);
}
int ans = sum/(n-1);
if(sum%(n-1)){
	ans++;
}
if(ans>mx){
	cout<<ans;
}else{
	cout<<mx;
}
return 0;
}
