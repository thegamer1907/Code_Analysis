#include <bits/stdc++.h>
 #define rep(i,a,b) for (int i=a;i<b;i++)
 #define rep2(i,a,b) for (int i=a;i>=b;i--)
 #define mod 1000000007
 #define INF  1e9+5
 #define f first
 #define se second
 #define endl '\n'
 #define ll long long
 #define ii pair <int,int>
 #define pll pair <ll,ll>
 #define vi vector <int>
 #define vl vector <ll>
 #define vvi vector < vi >
 #define vii vector < ii >
 #define vvii vector < vii >
 #define vll vector < ll >
 #define mi map<int,int>
 #define mll map<ll,ll>
 #define mci map<char,int>
 #define msi map<string,int>
 #define vb  vector <bool>
 #define pb push_back
 #define mk make_pair
 #define sz(a) a.size()
 #define all(a) a.begin(),a.end()
 #define rall(a) a.rbegin(),a.rend()
 #define int long long int
 #define Anurag_Gupta ios_base::sync_with_stdio(false);
#define IIIT_ALLD    cin.tie(NULL);cout.tie(NULL);
using namespace std;
int sumit(int x)
{
    int sum=0;
    while(x)
    {
        int y =x%10;
        sum+=y*y;
        x/=10;
    }
    return sum;
}
 signed main()
 {
     Anurag_Gupta
     IIIT_ALLD
     
     #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output1.txt","w",stdout);
     #endif

       int n,k;
       cin>>n>>k;

       vi v;
       for(int i=0;i<n;i++)
       {
             int x;
             cin>>x;
             v.pb(x);
       }
       sort(rall(v));

       int x = v[k-1];

       int count=0;
       for(int i=0;i<n;i++)
       {
            if(v[i]<x) break;
            else if(v[i] ==0 )continue;
            else  count++;
       }

       cout<<count<<"\n";
    }