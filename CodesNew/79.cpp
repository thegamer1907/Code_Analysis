
#include<bits/stdc++.h>

using namespace std;
int main()
{
int n;float e;
long long int l,i,j,k,c,d;
cin>>n>>l;
long long int a[n],s[n+1];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
s[0]=a[0];s[n]=l-a[n-1];
for(i=1;i<n;i++)
s[i]=a[i]-a[i-1];
d=s[1];
for(i=1;i<n;i++)
{
  if(s[i]>=d)
  d=s[i];
}
e=(float)d/2;
if(e>=s[0]&&e>=s[n])
cout<<fixed<<setprecision(9)<<e;
else if(s[0]>=e&&s[0]>=s[n])
cout<<fixed<<setprecision(9)<<(float)s[0];
else
cout<<fixed<<setprecision(9)<<(float)s[n];

}