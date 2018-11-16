#define ll long long
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<bitset>

using namespace std;
int a[100001];

int main()
{
//    freopen("a.in","r",stdin);
      string s;
      ll q,l,r;
      cin>>s;
      for(int i=1;i<=s.size();i++)
      {
         if(s[i-1]==s[i])
         {
             a[i]=a[i-1]+1;
         }
         else
         {
             a[i]=a[i-1];
         }
      }
      cin>>q;
      while(q--)
      {
          cin>>l>>r;

          cout<<a[r-1]-a[l-1]<<endl;
      }

}
