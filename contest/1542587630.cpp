#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int h,m,s,t1,t2,p[5],p1,p2;
bool ans,chk;
int main()
{scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
 p[1]=(h*3600+m*60+s)%43200;
 p[2]=(m*720+s*12)%43200;
 p[3]=s*720%43200;
 p1=t1*3600%43200;
 p2=t2*3600%43200;
 chk=true;
 for(int i=p1;i!=p2;i=(i+1)%43200)
  for(int j=1;j<=3;++j)
   if(i==p[j])
   {chk=false;
    break;
   }
 if(chk)
  ans=true;
 chk=true;
 for(int i=p1;i!=p2;i=(i+43199)%43200)
  for(int j=1;j<=3;++j)
   if(i==p[j])
   {chk=false;
    break;
   }
 if(chk)
  ans=true;
 if(ans)
  printf("YES");
 else
  printf("NO");
 return 0;
}
