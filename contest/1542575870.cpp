
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin>>p;
    
    int n,ans=0;
    cin>>n;
    
    string b;
    int it1=0,it2=0;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b==p && ans!=2)
         ans=2;
            
        if(b[1]==p[0] && ans!=2 && it1==0)
        {ans++;
            it1=1;
        }
           
        if(b[0]==p[1] && ans!=2 && it2==0)
        { ans++;
            it2=1;
        }
            
        
    }
    
    if(ans==2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}
