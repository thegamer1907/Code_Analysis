

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h,m,s,t1,t2;
    
    cin>>h>>m>>s>>t1>>t2;
    
    double hm,hs;
    
    hm=(m*12)/60;
    hs=(s*12)/60;
    
    if(hm<1)
     hm=hm+12;
    
    if(hs<1)
        hs=hs+12;
    
    int cnt=0;
    
    while(1)
    {
        if(h>t1 && h<t1+1)
          cnt++;
        if(hm>t1 && hm<t1+1)
            cnt++;
        if(hs>t1 && hs<t1+1)
            cnt++;
        
        if(t1==h)
            cnt++;
        if(t1==hm)
            cnt++;
        if(t1==hs)
            cnt++;
        
        if(t1==12)
            t1=1;
        else
            t1++;
        
        if(t1==t2)
            break;
    }
   // cout<<cnt;
    
    if(cnt==3 || cnt==0)
        cout<<"YES\n";
    
    else
        cout<<"NO\n";
    
    return 0;
}
