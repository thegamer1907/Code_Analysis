#include<bits/stdc++.h>
using namespace std;
#define For(n) for (int i=0;i<n;i++)
int main ()
{
int n,x,y,z,a=0,b=0,c=0;
cin>>n;
For (n)
{
    cin>>x>>y>>z;
    a+=x;
    b+=y;
    c+=z;
}
if (a==0 &&b==0 && c==0)
{
    cout<<"YES";
    return 0;
}
else
    cout<<"NO";
return 0;









}
