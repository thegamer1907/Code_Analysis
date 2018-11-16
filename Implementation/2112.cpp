#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,x,y,z,a=0,b=0,c=0;
    int sum=0;
    cin>>n;
    while (n--)
    {
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if(a==0 && b==0 && c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
