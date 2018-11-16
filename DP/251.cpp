#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define ii pair<ll,ll>
#define vii vector<ii>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mod 1000000007
ll modpow(ll base, ll exp, ll modulus) {base %= modulus;ll result = 1;while (exp > 0) {if (exp & 1) result = (result * base) % modulus;base = (base * base) % modulus;exp >>= 1;}return result;}
int main()
{
int n;
cin>>n;ll a[n];
f(i,0,n)
cin>>a[i];
int m;
cin>>m;ll b[m];
f(i,0,m)cin>>b[i];
sort(a,a+n);
sort(b,b+m);ll c=0;
f(i,0,n)
{
    f(j,0,m)
    {
        if(abs(a[i]-b[j])<=1)
        {
            c++;
            b[j]=11111;
            break;
        }
    }

}
cout<<c;



    return 0;
}
