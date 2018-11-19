#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n,k,x,a[16];
bool chk()
{if(a[0])
  return true;
 for(int i=0;i<16;++i)
  for(int j=0;j<16;++j)
   if(!(i&j)&&a[i]&&a[j])
    return true;
 return false;
}
int main()
{scanf("%d%d",&n,&k);
 for(int i=1;i<=n;++i)
 {int tmp=0;
  for(int j=0;j<k;++j)
  {scanf("%d",&x);
   tmp+=x<<j;
  }
  ++a[tmp];
 }
 if(chk())
  printf("YES");
 else
  printf("NO");
 return 0;
}
