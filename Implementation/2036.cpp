#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    int  c=0,a=0,b=0;
    cin>>n;
 int  x[n],y[n],z[n];
for(i=0;i<n;i++){
cin>>x[i]>>y[i]>>z[i];
a=a+x[i];
b=b+y[i];
c=c+z[i];}
if(a==0 && b==0 && c==0)
    cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    return 0;}

