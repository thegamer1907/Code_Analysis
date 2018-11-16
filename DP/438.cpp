#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j;
int main()     
{
    fast;
    z n,m,c=0;
    cin>>n; z a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m; z b[m];
    for(i=0;i<m;i++) cin>>b[i];

      sort(a,a+n); sort(b,b+m);
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
              c++;
              a[i]=INT_MAX;
              b[j]=INT_MIN;
            }
        }
      }
      
      cout<<c;




}