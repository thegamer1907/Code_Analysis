#include<iostream>
using namespace std;
main()
{
    long n,t,i,a[150000],b[150000],x=0,y;
    cin>>n>>t;
    cin>>a[1];
    y=a[1]+1;
    if(y==t) cout<<"YES";
    else{
    for(i=2;i<n;i++) {
        cin>>a[i];
        if(i==y) y=i+a[i];
        if(t==y) {x=1;}
    }
    if(x==1) cout<<"YES";
    else cout<<"NO";
    }
}
