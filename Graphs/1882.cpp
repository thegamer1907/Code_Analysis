#include<bits/stdc++.h>
using namespace std;
//queue<int> q;
#define lli long long int
#define li long int
#define si stack<int>
#define spi stack<pair<int,int> >
#define sli stack<long int>
#define mp make_pair
#define vi vector<int>
#define vlli vector<long long int>
#define vpi vector<pair<int,int> >
#define vli vector<long int>
#define pi pair<int,int>
#define pli pair<long int,long int>
#define qi queue<int>
#define qli queue<long int>
#define pb push_back
#define qpi queue<pair<int,int> >
#define pq priority_queue<>
#define vpli vector<pair<long int,long int> >
#define vulli vector<unsigned long long int>
#define vuli vector<unsigned long int>
#define ulli unsigned long long int
#define uli unsigned long int
#define vb vector<bool>

vector<int> factorize(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}

lli multiple(lli a, lli b, lli c)  //for multiplying bigger nmbers mod C like 10^18 and 10^18 (out of ulli range) 
{
  if (b==0)   return 0;
  lli ret = multiple(a,b >> 1,c);
  ret = (ret + ret) % c;
  if (b & 1) ret = (ret + a)%c;
  return ret;
}

/*
vb isPrime;
void sieve(int N) {
        isPrime.resize(N+1);
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i <= N; ++i) {
             if(isPrime[i] == true) {                    //Mark all the multiples of i as composite numbers
                 for(int j = 2; j*i <= N ;j++)
                     isPrime[j*i] = false;
            }
        }
    }
*/
li GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
/*
int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
*/



//lli que,n,m,a=0,b,mi=0,c=0,t=0,i=0,j,l,k,r,d,t1,t2;
 //priority_queue <pair<li,li> > q1; maxpriority element
 //priority_queue<pair<li,li>, vector<pair<li,li> >, greater<pair<li,li> > > q2; minpriority elements
li Log2(li x)
{
    li ans = 0 ;
    while (x>>=1) ans++;
    return ans ;
}

lli mini(lli a,lli b)
{
if(a<=b)
return a;
else return b;
}

lli maxe(lli a,lli b)
{
if(a>=b)
return a;
else return b;
}
 //ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int main()
{   
int n,m,a;
cin>>n;
vli ma(200),v;
for(int i=1;i<=n;i++)
{cin>>a;
	ma[a]++;
}
cin>>m;
for(int i=1;i<=m;i++)
	cin>>a,v.pb(a)	;
li ans=0;
sort(v.begin(),v.end());
for(int i=0;i<m;i++)
    {
    	if(ma[v[i]-1]>0)
    		ans++,ma[v[i]-1]--;
    	else if(ma[v[i]]>0)
    		ans++,ma[v[i]]--;
    	else if(ma[v[i]+1]>0)
    		ans++,ma[v[i]+1]--;
    
    }	

cout<<ans;

    }







