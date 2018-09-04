//template by murugappan....Copied from chamow :p

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define priq(i,comp) priority_queue( i, vector< i >,comp)
template<class t>
t lcm(t a,t b)
{
    return ((a*b)/__gcd(a,b));
}
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//end of template
//prime builder
const ll maxprime=1e7+3;
int prime[maxprime];
void sieve()
{
    for(ll i=0;i<maxprime;i++)
    {
        prime[i]=i;
    }
    for(ll i=2;i<maxprime;i+=2)
        prime[i]=2;
    for(ll i=3;i<maxprime;i+=2)
    {
        if(prime[i]!=i)
            continue;
        long long lim=i;
        lim*=lim;
        long long add=2*i;
        for(ll j=lim;j<maxprime;j+=add)
        {
            if(prime[j]==j)
                prime[j]=i;
        }
    }
}
ll pdiv[maxprime];
int main()
{
    /*
        assert(freopen("input.txt","r",stdin));
        assert(freopen("output.txt","w",stdout));
    */
    fastread;
    sieve();
    ll n,temp,m,l,r;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        while(temp>1)
        {
            ll fact=prime[temp];
            pdiv[fact]++;
            while(prime[temp]==fact)
                temp/=fact;
        }
    }
    for(ll i=1;i<maxprime;i++)
        pdiv[i]+=pdiv[i-1];
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        r=min(r,maxprime-1);
        l=min(l,maxprime-1);
        cout<<pdiv[r]-pdiv[l-1]<<"\n";
    }
    return 0;
}


