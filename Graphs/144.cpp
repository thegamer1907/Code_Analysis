#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ff first
#define ss second
#define mod 100005
#define pb push_back
#define mp make_pair
#define int long long
#define all(a) a.begin(), a.end()
#define inf (1LL<<61)
#define print_time cerr << "Time elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";
#define ull unsigned long long
#define debug1(x) cerr << #x << ": " << x <<'\n'
#define debug2(x, y) cerr << #x << ": " << x << '\t' << #y << ": " << y <<'\n'
#define debug3(x, y, z) cerr << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z <<'\n'
using namespace std;
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
bool myComparison1(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
bool myComparison2(const pair<int,int> &a,const pair<int,int> &b)
{
       if (a.ff == b.ff){
        return (a.ss < b.ss);
       } 
        return (a.ff < b.ff);
       
        
}
int gcd(int x,int y)
{
    if(y==0)
  return x;
    else
  return gcd(y,x%y);
}
int expo(int n,int m,int p)   //modULAR EXPONENTIATION
{
    int r=1;
    n=n%p;
    while(m>0)
    {
  if(m%2)
      r=(r*n)%p;
  n=(n*n)%p;
  m=m/2;
    }
    return r%p;
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
  if (n%i == 0 || n%(i+2) == 0)
     return false;

    return true;
}
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
  if (i <= r)
      z[i] = min (r - i + 1, z[i - l]);
  while (i + z[i] < n && s[z[i]] == s[i + z[i]])
      ++z[i];
  if (i + z[i] - 1 > r)
      l = i, r = i + z[i] - 1;
    }
    return z;
}



int32_t main()
{
   IOS;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin); 
   freopen("output.txt","w",stdout);
   #endif
   /********************* Code starts here ***********************/
   int n,t;
   cin >>n >> t;
   string s;
   cin >> s;
   for (int j=0;j<t;j++){
   for (int i=0;i<n;i++){
    if (s[i]=='B' && s[i+1]=='G'){
      //cout << i << "\n";
      s[i] = 'G';
      s[i+1] = 'B';
      i++;
    }
    
   }
 }
   cout << s;

    
}