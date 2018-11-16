#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a[1000],b[1000],c[1000],sa=0,sb=0,sc=0;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>a[i]>>b[i]>>c[i];
    cout<<endl;
    sa=sa+a[i];
    sb=sb+b[i];
    sc=sc+c[i];
  }
  
  if(sa==0&&sb==0&&sc==0)
    cout<<"YES";
  else cout<<"NO";
  return 0;
}
