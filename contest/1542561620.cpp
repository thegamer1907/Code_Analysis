#include <iostream>
#include <string>
#include <sstream>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#define len(a) ((int) (a).size())
#define ll long long
#define N 100000
#define fr(i,m,n) for(ll i=m;i<=n;i++)
#define f_r(i,m,n) for(ll i=m;i<n;i++)
#define pi acos(-1.0)
#define MAXN 1000000007
#define pf printf


using namespace std;
#define nMX 50000
#define pMX 50000
int pr[pMX+1],prnum[nMX+1];

int sieve()
{
    int i,j;
    for(i=1;i<=nMX;i++)
        prnum[i]=i+1;
    for(i=1;i<=nMX;i++)
        if(prnum[i]!=-1)
            for(j=2*prnum[i]-1;j<=nMX;j+=prnum[i])
                    prnum[j]=-1;
    j=0;
    for(i=1;i<=nMX;i++)
        if(prnum[i]!=-1)
            pr[++j]=prnum[i];
    return j;
}
int f[10000] = {0};
ll fib(ll n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    // If fib(n) is already computed
    if (f[n])
        return f[n];

    ll k = (n & 1)? (n+1)/2 : n/2;

    // Applyting above formula [Note value n&1 is 1
    // if n is odd, else 0.
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);

    return f[n];
}
bool prime(ll n){
    if (n<2)
        return false;
    for(ll i=2;i*i<=n;i++)
    {
        if (n%i == 0)   return false;
    }

    return true;

            }
ll bino(ll n, ll k)
{
    ll C[k+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;  // nC0 is 1

    for (ll i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (ll j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}


ll  bigmod ( ll a, ll p, ll m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else //If power is even then split it equally and return the result...
    {
        long long c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
bool v(char a)
{
    if(a=='a' || a=='e'|| a=='i' || a=='o' || a=='u')
        {return 1;}
        else
            return 0;

}

int main()
{
    string a,s;
    cin>>a;
    string ara[105];
    ll b,k=0,mp=0,mm=0,m=0;cin>>b;
    f_r(i,0,b)
    {cin>>ara[i];
    if(a==ara[i])
        m=2;}
      //  cout<<m<<endl;
    if(m!=2)
    {
        f_r(i,0,b)
        {s=ara[i];
        if(s[1]==a[0])
             k=1;
        if(s[0]==a[1])
            mp=1;
            //cout<<k<<" "<<mp<<endl;
        if(k==1 && mp==1)
            break;
        }
    }

      if(m==2 || (k==1 && mp==1))
        cout<<"YES";
      else

    cout<<"No";
}







