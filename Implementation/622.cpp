#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a[101],t=0;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];}
for(i=1;i<=n;i++){
    if(a[i]>=a[k] && a[i]!=0)
            t++;
    }

    cout<<t;
}