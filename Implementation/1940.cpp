#include<iostream>
using namespace std;
int main()
{
  int n,total1 = 0,total2=0,total3=0;
  cin>>n;
  int x[n],y[n],z[n];
  for (int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i]>>z[i];
  }
  for (int i=0;i<n;i++)
  {
    total1 += x[i];
    total2 += y[i];
    total3 += z[i];
  }
  if (total1 == 0 && total2 ==0 & total3 == 0){cout<<"YES";}
  else {cout<<"NO";}
  return 0;
}