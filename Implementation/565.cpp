#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,k,i;
   cin>>n>>k;
   vector<ll> v(n+1);
     for(i=1;i<=n;i++)
          cin>>v[i];
     sort(v.rbegin(),v.rend());

        ll d=v[k-1];
        ll c=0;
        if(v[k]!=0)
        {
            c=k;
            for(i=k;i<n;i++)
            {
                if(v[i]!=d)
                     break;
                c++;
            }
            cout<<c<<endl;

        }
        else
        {
            for(i=0;i<k;i++)
            {
                if(v[i]!=0)
                    c++;
            }
            cout<<c<<endl;
        }

}
