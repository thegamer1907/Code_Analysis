//ruler
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define mp             make_pair
#define pii            pair<int,int>
#define pll            pair<long long,long long>
#define vi             vector<int>
//vector< vector<int> > Matrix(N, vector<int>(M, -1)); N*M
#define all(a)         (a).begin(),(a).end()
#define F              first
#define S              second
#define sz(x)          (int)x.size()
#define hell           1000000007
#define hell2          1000000009
//#define endl           '\n'
#define loop(i,a,b)       for(int i=a;i<b;i++)
#define dec(i,a,b)     for(long long i=a;i>=b;i--)
#define PI                3.141592653589793l
#define vl             vector<long>
#define inf            5000000000000000000          
//18 0's
#define tr(c,i)        for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x)   ((c).find(x) != (c).end()) 
#define cpresent(c,x)  (find(all(c),x) != (c).end()) 
#define fill(a,b)      memset(a,b,sizeof(a))
#define N 200005
#define sp(x)   fixed<<setprecision(x)
using namespace std;
long long min(long long a,long long b){
    if(a<b)
     return a;
     else
     return b;
}
static long long gcd(long long  a, long long b) {
  long long r;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
long long lcm(long long a, long long b)
{
    long long temp = gcd(a, b);
 
    return temp ? (a / temp * b) : 0;
}
typedef unsigned long long uint64;

uint64 PowMod(uint64 x, uint64 e, uint64 mod)
{
  uint64 res;

  if (e == 0)
  {
    res = 1;
  }
  else if (e == 1)
  {
    res = x;
  }
  else
  {
    res = PowMod(x, e / 2, mod);
    res = res * res % mod;
    if (e % 2)
      res = res * x % mod;
  }

  return res;
}
int solve(){
	int n,m;
	cin>>n>>m;
	int a[n];
	loop(i,0,n){
		cin>>a[i];
	}
	sort(a,a+n);
	if(n==1){
		cout<<a[0]+m<<" "<<a[0]+m<<endl;
	}
	else{
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=(a[n-1]-a[i]);
		}
		m-=sum;
		if(m<=0){
			cout<<a[n-1]<<" "<<a[n-1]+m+sum<<endl;
		}
		else{
			cout<<a[n-1]+((m+n-1)/n)<<" "<<a[n-1]+m+sum<<endl;
		}
	}
	return 0;
	}
int main(){
    //freopen("B-small-attempt0.txt","r",stdin);
    //freopen("kick2.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
        
    return 0;
}
