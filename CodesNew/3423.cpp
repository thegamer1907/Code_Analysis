#include<iostream>
using namespace std;
int main()
{
    int n,m,min,s,i,mx=0,sum=0;

    cin>>n>>m;
    int x;
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(mx<x)mx=x;
    }
    s=(sum+m-1)/n+1;
    if(mx>s) min=mx;
    else min=s;
    cout<<min<<" "<<mx+m<<endl;
}
