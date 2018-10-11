#include <bits/stdc++.h>
using namespace std;
 
#define NL '\n'
#define eps 1e-9
#define ins insert
#define pb push_back
#define mp make_pair
#define ll long long
#define sz(x) x.size()
#define pi 2.0*acos(0.0)
#define sqr(x) ((x) * 1ll * (x))
#define all(x) (x).begin(),(x).end()
#define file_in(); freopen("input.txt", "r", stdin);
#define file_out(); freopen("output.txt", "w", stdout);
#define rep(ii,aa,bb) for(int (ii)=int(aa);(ii)<(int)(bb);++(ii))
#define per(ii,aa,bb) for(int (ii)=int(aa)-1;(ii)>=(int)(bb);--(ii))
#define _fastIO() ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))



int n, t, arr[100005];

int _bs(int x, int l, int r){
  if(l>r) return r;
  int mid = l + (r-l) / 2;
  if( (arr[mid]-x) <= t && (arr[mid+1]-x)>t ) return mid;
  else if( (arr[mid]-x) <= t && (arr[mid+1]-x)<=t) return _bs(x, mid+1, r);
  else if( (arr[mid]-x) > t) return _bs(x, l, mid-1);
}

vector<int>v;

int main(){
  _fastIO();
  cin >> n >> t; 
  arr[0] = 0;
  rep(i, 1, n+1){
    cin >> arr[i];
    arr[i] += arr[i-1];
  } 
  arr[n+1] = arr[n]+t+100;
  rep(i,0,n+1){
    v.push_back(abs(_bs(arr[i],i+1,n+1)-i));
  }
  sort(all(v),greater<>());
  cout << v[0] << NL;
}