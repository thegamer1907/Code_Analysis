/*Don't stop when you're tired, stop when you're done*/
/*Dont limit your challenges,challenge your limits*/
/*No matter how hard it is,No matter how hard it gets, I am going to make it*/
/*I have got a dream that's worth more than my sleep*/
/*It always seems impossible until it's done*/
/*Author- Prakhar Bindal(Indian Institute of Technology,Kharagpur)*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define mod1 500000003
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int> >vvi;
typedef pair<int,int>ii;
typedef vector<pair<int,int> >vii;
typedef vector<vector<pair<int,int> > >vvii;
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define PB pop_back
#define pf push_front
#define PF pop_front
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define nrep(i,n) for(int i=n-1;i>=0;i--)
#define nrep1(i,n) for(int i=n;i>=1;i--)
#define ia(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define ia1(a,n) for(int i=1;i<=n;i++) cin>>a[i]
#define clr clear
#define rz resize
#define sqr(a) ((a) * (a))
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
template<typename T> void scan(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();
    if (c == '-')
        neg = 1, c = getchar();
    while ((c < 48) || (c > 57))
        c = getchar();
    for ( ; c < 48||c > 57 ; c = getchar());
    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );
    if (neg) x *= -1;
}
template<typename T> void print(T n)
{
    bool neg = 0; 
    if (n < 0)
        n *= -1, neg = 1;
    char snum[65];
    int i = 0;
    do
    {
        snum[i++] = n % 10 + '0';
        n /= 10;
    }
    while (n);
    --i;
    if (neg)
        putchar('-');
 
    while (i >= 0)
        putchar(snum[i--]);
    putchar(' ');
 }
int readint () {
  bool minus = false;
  int result = 0;
  char ch;
  ch = getchar();
  while (true) {
    if (ch == '-') break;
    if (ch >= '0' && ch <= '9') break;
    ch = getchar();
  }
  if (ch == '-') minus = true; else result = ch-'0';
  while (true) {
    ch = getchar();
    if (ch < '0' || ch > '9') break;
    result = result*10 + (ch - '0');
  }
  if (minus)
    return -result;
  else
    return result;
}
long long int readll(){
  char r;
  bool start=false,neg=false;
  long long int ret=0;
  while(true){
    r=getchar();
    if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
      continue;
    }
    if((r-'0'<0 || r-'0'>9) && r!='-' && start){
      break;
    }
    if(start)ret*=10;
    start=true;
    if(r=='-')neg=true;
    else ret+=r-'0';
  }
  if(!neg)
    return ret;
  else
    return -ret;
}
int sliding_window_chutiyaap(int a[],int n,int k)
{
    int sum=0;
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]<=k)
        {
            sum+=a[i];
            ++count;
        }
        else if(sum!=0)
        {
            sum=sum-a[i-count]+a[i];
        }
        maxcount=max(maxcount,count);
    }
    return count;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n,k;
   cin>>n>>k;
   int yoturings[n];
   for(int i=0;i<n;i++)
    cin>>yoturings[i];
   cout<<sliding_window_chutiyaap(yoturings,n,k);
}

