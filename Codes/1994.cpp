#include<bits/stdc++.h>
 using namespace std;

 #define ll long long
 #define pb push_back
 #define fi first
 #define se second
 #define FILE ""
 #define ull unsigned long long
 #define ld long double
 #define rev reverse
 #define pob pop_back()
 #define sz size()
 #define bb begin()
 #define ee end()

 map<ll,ll> q,w;


 int main()
 {
     ios_base::sync_with_stdio(false);cin.tie(0), cout.tie(0);
     /*freopen(FILE ".in", "r", stdin);
     freopen( "out.txt", "w", stdout);*/
     ll n,k;
     cin >> n >> k;
     ll a[n];
     for(int i=0;i<n;i++)
     {
         cin >> a[i];
     }
     ll ans1=0;
     q[a[0]]++;
     for(int i=n-1;i>=2;i--)
     {
         w[a[i]]++;
     }
     for(int i=1;i<n-1;i++)
     {
         if(i!=1)
         w[a[i]]--;
         if(a[i]%k==0)
         {
             ans1+=q[a[i]/k]*w[a[i]*k];
         }
         q[a[i]]++;

     }
     cout << ans1;
    return 0;
 }

