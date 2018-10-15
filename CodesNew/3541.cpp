//AcFreak

#include<bits/stdc++.h>
#define lint long long int 
#define mp make_pair
#define pb push_back
#define f first
#define INF (lint )(1e9+5)
#define __ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define s second
#define endl '\n'
#define pii pair<int,int >
using namespace std;

int main()
{__
      
      int n,m;
      cin>>n>>m;
      
      vector<int >a(n);
      
      int i,j;
      for(i=0;i<n;i++)
      cin>>a[i];
      
      int mm=0;
      for(i=0;i<n;i++)
      mm=max(mm,a[i]);
      
      int val = *min_element(a.begin(),a.end());
      int l=mm,h=mm+m;
      int mid,ans=l;
      
      while(l<=h)
      {
            mid=(l+h)/2;
            int cc=0;
            for(i=0;i<n;i++)
            {
                  cc+=(mid-a[i]);
            }
            
            if(cc>=m)
            {
                  h=mid-1;
                  ans=mid;
            }
            else
            l=mid+1;
      }
      cout<<ans<<" "<<mm+m<<endl;
      return 0;
}