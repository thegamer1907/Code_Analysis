#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int N, k, n, K;
bool ans=0;
int a[100001], b[5], c[5];
vector <int> v;
main()
{
      cin>>N>>k;
      n=N;
      for(int i=1; i<=n; i++)
      {
              int s=0;
              int l=0;
              for(int j=1; j<=k; j++)
              {
                      cin>>b[j];
                      s=s*2+b[j];
                      if(b[j]==1)
                                 l++;
                      c[j]+=b[j];
              }
              if(s==0)
              ans=1;
              else
              if(l==k)
              {
                      i--;
                      n--;
              }
              else
              a[i]=s;
      }
      if(ans==1)
      {
                cout<<"YES"<<endl;
                return 0;
      }
      K=1;
      for(int i=1; i<=k; i++)
      {
              if(c[i]==N)
              {
                         cout<<"NO"<<endl;
                         return 0;
              }
              K*=2;
      }
      sort(a+1, a+n+1);
      for(int i=1; i<=n; i++)
              if(a[i]!=a[i+1])
                              v.push_back(a[i]);
      if(v.size()>=K/2)
      {
                     cout<<"YES"<<endl;
                     return 0;
      }
      for(int i=0; i<v.size(); i++)
              for(int j=0; j<v.size(); j++)
              {
                  int M=v[i]&v[j];
                   if(M==0)
                   {
                                   cout<<"YES"<<endl;
                                   return 0;
                   }
              }
      cout<<"NO"<<endl;
}