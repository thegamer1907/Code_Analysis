#include <bits/stdc++.h>
using namespace std;

int main() {
int n,l,i;
double d;
cin>>n>>l; 
vector<double> a(n);

for(i=0;i<n;i++)        cin>>a[i];
sort(a.begin(),a.end());
 d=a[0]-0;
for( i=1;i<a.size();i++)
{    if((a[i]-a[i-1])/2>d)
      d=(a[i]-a[i-1])/2;
    
}
if (l-a[n-1]>d)
  d=l-a[n-1];
  
  cout<<fixed<<setprecision(9)<<d;
  
	return 0;
}