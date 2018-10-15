#include<iostream>
using namespace std;
int main()
{
    int n,m,l,maxi,mini,a=-222;
    cin>>n;
    cin>>m;
    int k=m;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>=a)
            {a=x[i];}
        m=m+x[i];
    }
    mini=m/n;
    if(m%n==0)
        {l=mini;}
    else
        {l=mini+1;}
    if(l<a)
        cout<<a;
    else
        cout<<l;
    maxi=a+k;
    cout<<" "<<maxi;
}
