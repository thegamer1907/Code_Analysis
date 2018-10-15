#include<bits/stdc++.h>
#include <random>
#define ll long long int
#define mod 1000000007
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define fo(i,a,n) for(int (i)=(a);(i)<(n);(i)++)
#define all(c) (c).begin(),(c).end()
#define mp(a,b) make_pair(a,b)
#define pb(c) push_back(c)
#define vi vector<int>
#define vii vector<pair<int,int> >
#define vvi vector<vector<int> >
#define pii pair<int,int>
#define F first
#define S second
#define FF first.first
#define FS first.second
#define SF second.first
#define SS second.second
using namespace std;

ll gcd(ll a, ll b)
{   if (a == 0)
        return b;
    return gcd(b%a, a);
}

long long stoi(string str)
{ long long n=0;
  for(int i=0;i<str.length();i++)
     n=n*10+str[i]-'0';
 return n;
}

 // Returns (a * b)%m;
int mul_mod(int a,int b,int m)
{ int x = 0, y = a;
        while(b > 0)
            {if(b & 1)
             { // No overflows in additons.
                 x = (x + y) % m;}
            y = (y + y) % m;
            b >>= 1;
            }
        return x;
}

ll power(ll x,ll y, ll p)
{   ll res = 1;
    x = x % p;
    while (y > 0)
    {    if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t=1;
while(t--)
{ ll n,q;cin>>n>>q;
   ll a[n+1]={0};
   for(int i=1;i<=n;i++)
   { cin>>a[i];
     a[i]+=a[i-1];
   }
   ll ind=1;ll rem=0;
   for(int i=0;i<q;i++)
   { ll k;cin>>k;

     int idx = upper_bound(a+ind,a+n+1,a[ind-1]+k+rem)-a;
     if(idx==n+1) {ind=1;rem=0;}
     else {rem=a[ind-1]+k+rem-a[idx-1];ind=idx; }
     //cout<<ind<<" "<<idx<<" "<<rem<<" ";;
     cout<<n+1-ind<<endl;
   }

}
return 0;
}
