#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#define ll long long
const int N=1e5+10;
const int inf=0x3f3f3f3f;
const double eps=1e-7;
const int mod=1e9+7;
const double pi=acos(-1.0);
using namespace std;

int a[N];

int main()
{
   int n,k;  cin>>n>>k;
   for(int i=1;i<=n;i++)
   {
       int x=0,y;
       for(int j=1;j<=k;j++)
       {
           scanf("%d",&y);
           x=x*2+y;
       }
       a[x]=1;
   }
   for(int i=0;i<16;i++)
   {

       for(int j=0;j<16;j++)
       {
           if((i&j)==0&&a[i]&&a[j])
           {
               puts("YES"); return 0;
           }
       }
   }
   puts("NO");

return 0;
}
