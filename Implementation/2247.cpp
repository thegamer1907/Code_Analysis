#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin>>k>>n>>w;
    int m=(1+w)*w/2*k-n;
    if(m>0)cout<<m;
    else cout<<0;
}

