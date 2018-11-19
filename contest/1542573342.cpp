#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
double a[5];
void work()
{
   double h,m,s,t1,t2;
   cin>>h>>m>>s>>t1>>t2;
   a[1]=h+m/60+s/3600;
   if(a[1]>=12)a[1]-=12;
   a[2]=m/5+s/300;
   if(a[2]>=12)a[2]-=12;
   a[3]=s/5;
   if(a[3]>=12)a[3]-=12;
   int i;
   if(t1<t2)swap(t1,t2);
   for(i=1;i<=3;i++){
      if(t1<=a[i] && a[i]<=12)break;
      if(0<=a[i] && a[i]<=t2)break;
   }
   if(i==4){
      puts("YES");
      return ;
   }
   for(i=1;i<=3;i++){
      if(t2<=a[i] && a[i]<=t1)break;
   }
   if(i==4){
      puts("YES");
      return ;
   }
   puts("NO");
}

int main()
{
   //freopen("pp.in","r",stdin);
   //freopen("pp.out","w",stdout);
	work();
	return 0;
}
