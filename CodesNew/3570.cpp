#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,p,i,a;
int x,y,z=0;
vector<int> v;
cin >> n;
cin >> p;
for(i=0;i<n;i++)
{
    cin >> a;
    v.push_back(a);
}

y = p + *max_element(v.begin(),v.end());

a = *max_element(v.begin(),v.end());
for(i=0;i<v.size();i++)
{
    z = z + a-v[i];
}
if(z>=p)
{
    x = a;
}
else
{
  if((p-z)%n==0)
  {
    x = a + (p-z)/n;
  }
  else
  {
    x = a +(p-z)/n +1 ;
    
  }
}
cout << x << " " << y << "\n";
}