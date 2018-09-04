#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
long long k,t,T,X,Z;
main ()
{
    cin>>k;
    
    while (t<20000000)
    {
        t++;
        T=t;
        
        X=0;
        
        while (T>0)
        {
            X+=T%10;
            T/=10;
        }
        
        if (X==10)
        {
            Z++;
            
            if (Z==k) 
            {
                cout<<t<<endl;
                return 0;
            }
        }
    }
}