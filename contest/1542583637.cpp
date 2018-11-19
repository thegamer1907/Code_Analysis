/*input
ah
1
ha
*/
#include <bits/stdc++.h>
using namespace std;

#define fill(a,val) memset(a, (val), sizeof a)
#define pb push_back
#define lli long long int
#define scantype int
#define endl "\n"
#define unique(x) x.erase(unique(x.begin(),x.end()), x.end())
#define sort_f(x)  sort(x.begin(),x.end());
#define sort_r(x)  sort(x.rbegin(),x.rend());

lli MOD  = 1000000007;
lli inf = 1e15;

void scan(scantype &x);
lli powermod(lli _a,lli _b,lli _m){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
lli string_to_number(string s){lli x=0; stringstream convert(s); convert>>x; return x;}
lli add(lli a,lli b){lli x = (a+b)%MOD; return x; }
lli mul(lli a,lli b){lli x = (a*b)%MOD; return x; }
lli sub(lli a,lli b){lli x = (a-b+MOD)%MOD; return x; }
lli divi(lli a,lli b){lli x = a;lli y = powermod(b,MOD-2,MOD);lli res = (x*y)%MOD;return res;}

#define N 200003

long  divisors(long x) {
    long limit = x;
    long numberOfDivisors = 0;

    if (x == 1) return 1;

    for (long i = 1; i < limit; ++i) {
        if (x % i == 0) {
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
        if(numberOfDivisors>=4)
        {
            break;
        }
    }

    return numberOfDivisors;
}
 bool isPrime(long n)
{
   
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (long i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
#define max_a 100001
bool visit[max_a]={false};
vector<long> a[max_a];
long sum=0;
long cost[max_a];
void dfs(long node)
{
    visit[node]=true;
    
    for(int i=0;i<(int)a[node].size();i++)
    {
        if(visit[a[node][i]]==false)
        {
            sum+=cost[a[node][i]];
            dfs(a[node][i]);
            
        }
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n;
    cin>>n;
    int flag=0;
    int countm1=0,countm2=0;
    for(int i=0;i<n;i++)
    {
      string s1;
      cin>>s1;
     
      if(s1==s)
      {
        flag=1;
        
      }
      
       if(s[1]==s1[0])
      {
       countm1++;
      }

       if(s[0]==s1[1])
      {
        countm2++;
      }
      if(countm1>0 && countm2>0)
      {
        flag=1;
        
      }
    }
    if(flag==1)
    {
      cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }
    
    return 0;
}