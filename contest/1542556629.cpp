#include<bits/stdc++.h>
#define ll long long int
#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define w(t) while(t--)
#define f(i,n) for(i=0;i<n;i++)
#define fd(i,n) for(i=n-1;i>=0;i--)
#define p(a) printf("%d",a)
#define pl(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define ent printf("\n")
#define mod 1000000007
#define PI 3.14159265
#define gs getline(cin,s)
#define pb push_back
#define mp make_pair
#define INF 1e18
#define INFI INT_MAX
#define pli pair<ll,ll>
#define pii pair<int,int>
#define bitcnt(x) __builtin_popcountll(x)
#define ld long double
using namespace std;

int main()
{
    string s;
    cin>>s;

    ll i,j,k,flag=0,last=0,first=0;
     ll n;
     sl(n);
     while(n--)
     {
         string s1;
         cin>>s1;
         if(s1[0]==s[0]&&s1[1]==s[1])
         {
             flag=1;
         }
         if(s1[0]==s[1])
         {
             last=1;
         }
         if(s1[1]==s[0])
         {
             first=1;
         }
         if(last==1&&first==1)
            flag=1;
     }
     if(flag==1)
     {
         cout<<"YES\n";
     }
     else
        cout<<"NO\n";
    return 0;
}