#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a=0,b=0,c=0,t=0,x=0,y=0,z=0;
    cin>>n;
    int ar[n+2],ab[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
            ++a,++x;
        else
            ++b;
        if(a>b)
        {
            c+=a;
            a = 0;
            b = 0;
            if(ar[i]==0)
                ++b;
        }

        if(b-a>z-y )
        {
            //cout<<i+1<<" "<<b<<" "<<z<<endl;
            y = a;
            z = b;
           // cout<<b<<" "<<a<<endl;
            //cout<<z<<endl;
        }

        //if(i>49)
        //cout<<i+1<<" "<<ab[t]<<endl;


    }
    //cout<<z<<endl;
    if(ar[n-1]==1 && a<b)
        c+=a;
    if(x==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    //cout<<c<<endl;

    cout<<x+z-y<<endl;
}
