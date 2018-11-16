#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    w=(w*(w+1)*k)/2;
    ll ji=0;
    cout<<max(ji,w-n)<<endl;



}
