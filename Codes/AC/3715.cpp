#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int b,s,c,nb,nc,ns,pb,pc,ps,r;

int ok(long long int x)
{
    long long int buyb=max(0LL,x*b-nb);
    long long int buys=max(0LL,x*s-ns);
    long long int buyc=max(0LL,x*c-nc);
    if(buyb*pb+buys*ps+buyc*pc<=r)
    return 1;
    return 0;
}   

int main()
{
    long long int lo,mid,hi,i;
    string str;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='B')
        b++;
        else if(str[i]=='S')
        s++;
        else
        c++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    lo=0;hi=2000000000000;
    while(hi-lo>1)
    {
        mid=(lo+hi)/2;
        if(ok(mid))
        lo=mid;
        else
        hi=mid;
    }
//  cout<<hi<<" "<<lo<<endl;
    if(ok(lo))
    {
        cout<<lo;
        return 0;
    }
    cout<<"0";
    return 0;
}