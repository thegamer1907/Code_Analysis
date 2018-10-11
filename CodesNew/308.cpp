#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,c=0,p=0,x=0;
    cin>>t>>n;
    ll arr[t+2];
    for(ll i=0; i<t; i++)
    {
        cin>>arr[i];
        x=x+arr[i];
        while(x>n){
            x=x-arr[p++];
        }
        if(i-p+1>c)
            c=i-p+1;
    }
    cout<<c<<endl;

}
