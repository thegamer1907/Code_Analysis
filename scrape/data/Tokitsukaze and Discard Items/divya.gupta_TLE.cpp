#include <bits/stdc++.h>
using namespace std;

 #define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
   // cin>>T;
    while (T--)
    {
       ll n,m,k,i,c,r,s,d;c=0;d=0;r=1;s=0;
       cin>>n>>m>>k;
       ll a[m];
       for(i=0;i<m;i++)
       cin>>a[i];
       i=0;
       if(k==1)
       {
           cout<<m;
           return 0;
       }
       while(a[m-1]!=0)
       {
              c=0;
              while(a[i]-s<=r*k)
              {
                  c++;
                  a[i]=0;
                  i++;
              }
              if(c==0)
              {
                  r++;
              }
              else
              {
                  d++;
                  s+=c;
              }
         
       }
       cout<<d;
    }
}