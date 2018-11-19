#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<ctime>
#include<vector>
#include<set>
#include<map>
#include<stack>
using namespace std;
int main()
{     int s,f,m,t1,t2;
      double a[10];
      cin>>s>>f>>m>>t1>>t2;
      if(s==12)s=0;
      a[1]=s*30.0+double(f)*0.5+double(m)*0.5/60;
      a[2]=f*6.0+double(m)/60;
      a[3]=double(m)*6.0;
      a[4]=t1*30.0;
      a[5]=t2*30.0;
     // for(int i=1;i<=5;i++)
        //cout<<a[i]<<endl;
      int bad1=0,bad2=0;
      for(int i=1;i<=3;i++)
        if(a[i]>a[4]&&a[i]>a[5]||a[i]<a[4]&&a[i]<a[5])bad1++;
          else bad2++;
      if(bad1&&bad2)puts("NO");
        else puts("YES");
	  return 0;
}
