#include<bits/stdc++.h>
#define int long long  
using namespace std;
int n,c;
 
 

 
 
#undef int 
int main()
{
#define int long long 
	int t=1;
   // cin>>t;
    while(t--)
    {
       int n;
       int k;
        cin>>n>>k;
        int a[16]; int b[n][k];
        int i,j;
        for(i=0;i<16;i++) a[i]=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            cin>>b[i][j];
        }
        int x=0,y=1;
        for(i=0;i<n;i++)
        {
            x=0; y=1;
            for(j=0;j<k;j++)
            {
              x += y*b[i][j];
              y *= 2;
            }
            a[x]++;
        }
        int c[k];
         int f=0;
         // for(i=0;i<16;i++)
         //     cout<<a[i]<<" "; cout<<endl;
        for(i=0;i<16;i++)
        {
            for(j=0;j<16;j++)
            {
                if(a[i] > 0 && a[j] > 0 && (i&j)==0) f=1;
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
        
return 0;
    
} 