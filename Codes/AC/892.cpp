#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
/*
#define cin fin
#define cout fout

ifstream fin("input.txt");
ofstream fout("output.txt");*/

#define SI(x) cin>>x
#define DI(x, y) cin>>x>>y
#define TI(x, y, z) cin>>x>>y>>z
#define FI(w, x, y, z) cin>>w>>x>>y>>z

#define SO(x) cout<<x<<endl
#define DO(x, y) cout<<x<<" "<<y<<endl
#define TO(x, y, z) cout<<x<<" "<<y<<" "<<z<<endl
#define FO(w, x, y, z) cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl

#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define pr pair<lli, lli>
//#define V(x) vector<x>
#define pb(x) push_back(x)
#define SORT(ls) sort(ls.begin(), ls.end())
#define DESC(ls) sort(ls.rbegin(), ls.rend()); 
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
#define mll(x, y) map<lli x, lli y>

#define F(i, a, n) for(i=a;i<n;i++)
#define B(i, a, n) for(i=n-1;i>=a;i--)


#define mod 1000000007
#define pi 3.141592653589793238

//GCD
lli gcd(lli a, lli b){
    if(b < a)    {
        lli temp = a;
        a = b;
        b = temp;
    }
    if(a == 0){
        return b;
    }
    return gcd(b%a,a);
}
lli max(lli a, lli b){
    if(a>b)
        return a;
    return b;
}
//LCM
lli lcm(lli a, lli b){
    return (a*b/gcd(a,b));
}

//Factorial
lli fact(lli x){
    lli ans = 1;
    if(x == 0){
        return 1;
    }
    while(x > 0){
        ans = (ans*x)%mod;
        x--;
    }
    return ans%mod;
}
//C(n, r)
lli comb(lli n, lli r){
    lli x=fact(r), y=fact(n-r);
    x=(x*y)%mod;
    if(fact(n)>x)
        return fact(n)/x;
    return (fact(n)+mod)/x;
}
lli power(lli a, lli p)
{
    lli ans = 1;
    while(p > 0)
    {
        if(p%2)
        {
            ans *= a;
            ans %= 1000000007;
        }
        a*=a;
        a%=1000000007;
        p/=2;
    }
    return ans%1000000007;
}
lli dist(lli x1, lli y1, lli x2, lli y2){
    return (1.0*(x1-x2)*(x1-x2) + 1.0*(y1-y2)*(y1-y2));
}
//binary of a number
vector <lli> getbinary(lli x){
    vector <lli> bin(20000,0);
    lli iter = 0;
    while(x > 0){
        if(x%2 == 1){
            bin[iter] = 1;
        }
        else{
            bin[iter] = 0;
        }
        iter++;
        x/=2;
    }
    return bin;
}

int main(){
    FASTER;
    lli n, k, ans=0, i;
    string s;
    TI(n, k, s);
    vector<lli> a, b;
    a.pb(-1);b.pb(-1);
    F(i, 0, n){
        if(s[i]=='a')
            a.pb(i);
        else
            b.pb(i);
    }
    F(i, 0, a.size()){
        if(i+k+1>=a.size())
            ans=max(ans, n-a[i]-1);
        else
            ans=max(ans, a[i+k+1]-a[i]-1);
    }
    F(i, 0, b.size()){
        if(i+k+1>=b.size())
            ans=max(ans, n-b[i]-1);
        else
            ans=max(ans, b[i+k+1]-b[i]-1);
    }
    SO(ans);
}