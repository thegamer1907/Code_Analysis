#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> v(100);
int f(int a,int b,int n)
{int i,c=0;
 for(i=a;i<=b;++i)
 v[i]=!v[i];
 for(i=0;i<n;++i)
 {if(v[i])
  ++c;
 }
 for(i=a;i<=b;++i)
 v[i]=!v[i];
 return c;
}
int main()
{int n,i,j,m=0;
 cin>>n;
 for(i=0;i<n;++i)
 cin>>v[i];
 for(i=0;i<n;++i)
 {for(j=i;j<n;++j)
  m=max(m,f(i,j,n));
  if(m==n)
  break;
 }
 cout<<m;
 return 0;
}
