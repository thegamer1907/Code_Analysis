#include<bits/stdc++.h>
#define int long long  
using namespace std;

 
#undef int 
int main()
{
#define int long long 
	int t=1;
   // cin>>t;
    while(t--)
    {
       int n;
       
        cin>>n;  int a[n];
        int i; int m=0,x=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) m=max(m,a[i]);
        for(i=0;i<n;i++) x=x+(m-a[i]);
        cout<<x<<endl;
        
    }
        
return 0;
    
} 