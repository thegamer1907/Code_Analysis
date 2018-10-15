//AcFreak

#include<bits/stdc++.h>
#define lint long long int 
#define mp make_pair
#define pb push_back
#define f first
#define INF (lint )(1e9)
#define __ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define s second
#define endl '\n'
#define pii pair<int,int >
using namespace std;
//Use Below with unordered maps  :{ 
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        
        return h1 ^ h2;  
    }
};
int main()
{__   
      
      lint n,k;
      cin>>n>>k;
      
      lint i,j;
      vector<lint >a(n),q(k);
      for(i=0;i<n;i++)
      cin>>a[i];
      
      for(i=0;i<k;i++)
      cin>>q[i];
      
      for(i=1;i<n;i++)
      a[i]+=a[i-1];
      
      lint s=0;
      for(i=0;i<k;i++)
      {

            s+=q[i];
            auto it = upper_bound(a.begin(),a.end(),s);
            lint ans= it - a.begin();
            if(ans == n)
            {
            ans=0;
            s=0;
            }
            cout<<n-ans<<endl;
      }
      return 0;
}