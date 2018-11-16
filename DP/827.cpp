
#include <bits/stdc++.h>
#include <stack>
#include<fstream>
using namespace std;

#define all(v) ( ((v).begin()),((v).end()) )
#define sz(v)  ( (int)((v).size()) )
#define ll long long
#define FOR(x)  for(int i=0;i<n;i++)
#define pi 3.14159

template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
int maxpow(ll n, ll p)
{
    int pow = 0;
    for(ll i= p ; i<= n && i>0; i=i*p)
        pow += n/i;
    return pow ;
}
ll factmodP (ll n, ll p)
{
    ll r =1;
    while(n>0)
    {
        for(ll i =1; i<=n%p; i++)
            r = (r*i)%p;
        n/=p;
        if(n%2!=0) r = p-r;
    }
    return r;
}
vector<ll> generate_divisors(ll n)
{
    vector<ll> v;
    ll i;
    for(i = 1 ; i*i< n  ; ++i)
        if(n%i == 0)
            v.push_back(i), v.push_back(n/i);

    if(i*i == n)
        v.push_back(i);

    return v;    //Not sorted
}
int GCD_f(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}
ll lcm (ll a,ll b)
{
    return ( a*b / gcd(a,b) );
}
ll fact(ll x)
{
    ll r = 1;
    for(ll i = 1 ; i<=x ; i++)
        r*=i;
    return r;
}
int pow(int b, int p)          // O(log(p) base 2)
{
    if(p == 0)  return 1;
    int sq = pow(b, p/2);
    sq = sq*sq;

    if(p%2 == 1)
        sq = sq*b;

    return sq;
}
ll sumPows(ll a, int k)  // Return a^1+a^1+a^2+.....a^k    in O(k)
{
    if (k == 0)
        return 0;

    if (k % 2 == 1)
        return a * (1 + sumPows(a, k - 1));

    ll half = sumPows(a, k / 2);
    return half * (1 + half - sumPows(a, k / 2 -1) );
}
bool Prime(int num)
{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int nextprime(int x)
{
    x++;
    if(Prime(x))
        return x;
    else
        return nextprime(x++);
}
void Sort(int x,int y,int z)
{
    if(x>y)
        swap(x,y);
    if(x>z)
        swap(x,z);
    if(y>z)
        swap(y,z);
}
bool isPrime(ll n)
{
    if (n==2) return true;
    if (n<2 || n%2 ==0) return false;

    for (ll i =3 ; i*i <= n ; i+=2)
        if(n%i ==0)
            return false;
    return true;
}
ll fib (ll n)
{
    if (n<=1)
        return n;
    else
        return (fib(n-1)+fib(n-2));
}
void iterativeFib()
{
    int a = 0, b = 1;
    for (int i = 2; i < 10; ++i)
    {
        int c = a+b;
        a = b;
        b = c;
    }
}
ll Rev(ll n)
{

    ll t=0, r=0;

    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }

    return r;
}
string is(ll x)
{
    string s;
    stringstream ss;
    ss << x;
    ss >> s;
    return s;
}
void rev(string str)
{
    int n = str.length();
    for (int i=0; i<n/2; i++)
        swap(str[i], str[n-i-1]);
}

int Egame(ll a,ll b)
{
    if (b==0) return 0;
    if(a/b>1) return 1;
    else
        return Egame(b,a-b)+1;
}
bool deg(int x, int d)
{
    while (x > 0)
    {
        if (x % 10 == d)
            break;
        x = x / 10;
    }
    return (x > 0);
}

void O__o()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
ll gcD(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll si ( string n)
{
    stringstream geek(n);
    ll x = 0;
    geek >> x;
    return x;
}
void bin(ll n)
{
    ll r;
    if ( n<1)
    {
        cout<<0;
        return;
    }
    if (n==1)
    {
        cout <<1;
        return;
    }
    r = n%2;
    bin(n/2);
    cout << r;
}
void primeFactors(int n)
{
    while (n%2 == 0)
    {
        cout <<2<<" ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            cout << i <<" ";
            n = n/i;
        }
    }
    if (n > 2)
        cout << n<<" ";
}
void factors(ll N, ll s[])
{
    vector <bool> p(N+1, false);
    for (ll i=2; i<=N; i+=2) s[i] = 2;
    for (ll i=3; i<=N; i+=2)
        if (p[i] == false)
        {
            s[i] = i;
            for (ll j=i; j*i<=N; j+=2)
                if (p[i*j] == false)
                {
                    p[i*j] = true;
                    s[i*j] = i;
                }
        }
}
void pf(ll N)
{
    ll s[N+1];
    factors(N, s);
    ll curr = s[N];
    ll cnt = 1;
    while (N > 1)
    {
        N /= s[N];
        if (curr == s[N])
        {
            cnt++;
            continue;
        }
        cout << "(" << curr << "^" << cnt << ")*";
        curr = s[N];
        cnt = 1;
    }
    return ;
}
int sum (int x,int y)
{
    return (x+y);
}
bool zero (string x)
{
    for(int i=0; i<x.length(); i++)
    {
        if(x[i]!='0')
        {
            return false;
        }
    }
    return true;
}
ll binDec(ll n)
{
    ll d = 0, i = 0, r;
    while (n!=0)
    {
        r = n%10;
        n /= 10;
        d += r*pow(2,i);
        ++i;
    }
    return d;
}
ll decBin(ll n)
{
    ll b = 0;
    ll r, i = 1;

    while (n!=0)
    {
        r = n%2;
        n /= 2;
        b += r*i;
        i *= 10;
    }
    return b;
}
bool rec(string s, int x)
{
    if(s[x]==s[x+1])
    {
        swap(s[x],s[0]);
        return rec(s,x);
    }
    else
        return true;
}
int main()
{
    O__o();

    int n = 0, z = 0, o = 0, mx = -1;
    bool a = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if (a)
        {
            o++;
            if (z>0)
                z--;
        }
        else
        {
            z++;
            mx = max(z,mx);
        }
    }
    cout << mx+o;

    return 0;
}
