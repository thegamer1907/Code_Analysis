#include<iostream>
using namespace std;
int main()
{
    int i,n,x[200],y[200],z[200],s=0,k=0,l=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        s = s + x[i];
        k = k + y[i];
        l = l + z[i];
    }
    if(s==0 && k==0 && l==0)
        cout<<"YES";
    else
        cout<<"NO";
}
