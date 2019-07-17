#include<bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;
 
typedef pair<long long int,long long int>pa;
#define resize(A) A.resize(unique(A.begin(), A.end()) - A.begin())
#define pb push_back
 
# define  MAX 200005
long long int MOD=1e9+7;
long long int INF=1e18;
 
int main()
{
    
       ios_base::sync_with_stdio(false); 
       cin.tie(NULL);
     cout.tie(NULL);
      long long int i,j,k=0,l=0,r=0,m=0,n,p=0,cnt=0,cnt1=0,x,y,z=0,a,b,low,mid,high,ans=0,maxi=0,mini=INF,t;
    cin>>n>>m>>k;
    long long int B[m];
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sort(B,B+m);
    r=0;
    i=0;
    z=1;
    while(i<m)
    {
        cnt=cnt+cnt1;
        cnt1=0;
        r++;
        while(i<m)
        {
            p=B[i]-cnt;
         //   cout<<B[i]<<" "<<p<<endl;
            if(p%k==0)
            {
                x=p/k;
            }
            else
            {
                x=p/k+1;
            }
            if(x==z)
            {
                cnt1++;
                i++;
            }
            else
            {
                break;
            }
        
            
        }
        if(cnt1==0)
        {
            z=x;
            r--;
        }
        
       
        
       
    }
    cout<<r<<endl;
   
}