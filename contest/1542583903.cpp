#include<bits/stdc++.h>
using namespace std;
#define L long long int
const int M=100;
int mark[M],h,t,s,t1,t2;
int main()
{
  cin>>h>>t>>s>>t1>>t2;
  h%=12;
  t1%=12;
  t2%=12;
  if(t>0 || s>0)
    mark[2*h+1]=true;
  else
    mark[2*h]=true;
  if(s>0 || t%5)
    mark[2*(t/5)+1]=true;
  else
    mark[2*(t/5)]=true;
  if(s%5)
    mark[2*(s/5)+1]=true;
  else
    mark[2*(s/5)]=true;
  //for(int i=0;i<24;i++)cout<<mark[i]<<" ";
  int p=t1*2;
  while(1)
    {
      if(p==2*t2)
	return cout<<"YES"<<endl,0;
      if(mark[p])
	break;
      p++;
      p%=24;
    }
  p=t1*2;
  while(1)
    {
      if(p==t2*2)
	return cout<<"YES"<<endl,0;
      if(mark[p])
	break;
      p--;
      p+=24;
      p%=24;
    }
  cout<<"NO"<<endl;
  return 0;
}
