#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define in1(n) int n;cin>>n
#define in2(a, b) int a,b;cin>>a>>b
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define ll  long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define out(n) cout<<n
#define outl(n) cout<<n<<endl
// string toBin(ll a) {
//     string res = "";
//     while (a) {
//         res += char((a & 1) + '0');
//         a >>= 1;
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }
// int binarySearch(int arr[], int l, int r, int x){
//   while (l <= r)
//   {
//     int m = l + (r-l)/2;
//     if (arr[m] == x) 
//         return m;  
//     if (arr[m] < x) 
//         l = m + 1; 
//     else
//          r = m - 1; 
//   }
//   return -1; 
// }
// bool IsPrime(int number){
//     if(number < 2) return false;
//     if(number == 2) return true;
//     if(number % 2 == 0) return false;
//     for(int i=3; (i*i)<=number; i+=2){
//         if(number % i == 0 ) return false;
//     }
//     return true;
// }
// int modInverse(int a, int m){
//     int m0 = m, t, q;
//     int x0 = 0, x1 = 1;
//     if (m == 1)
//       return 0;
//     while (a > 1)
//     {
//         q = a / m;
//         t = m;
//         m = a % m, a = t;
//         t = x0;
//         x0 = x1 - q * x0;
//         x1 = t;
//     }
//     if (x1 < 0)
//       x1 += m0;
//     return x1;
// }
// ull ncr(ull n, ull k){
//   if(k==0 || k==n)return 1;
//   return  ncr(n-1, k-1) + ncr(n-1, k);
// }
// ll gcd(ll a, ll b){
//     if(a%b==0)return b;
//     return gcd(b,a%b);
// }
void solve(){
    in1(n);
    ll a[n+1],count=0;
    a[0]=0;
    rep(i,1,n+1){
        cin>>a[i];
        a[i]+=a[i-1];
        if(a[i]==0)count++;
    }
    ll s=a[n],d=s/3;
    if(s%3){
        out(0);
        return;
    }else if(s==0){
        out((count-1)*(count-2)/2);
        return;
    }
    ull ans=0,cur=0;
    rep(i,0,n){
        if(a[i]==2*d){
            ans+=cur;
        }
        if(a[i]==d) cur++;
    }
    out(ans);
}
int main(){
	io;
	int t=1;
// 	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}