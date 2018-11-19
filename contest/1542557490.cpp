#include<bits/stdc++.h>

using namespace std;

int main()
{
  int h,m,s,in,tar;
  scanf("%d%d%d%d%d",&h,&m,&s,&in,&tar);

  float dh,dm,ds,din,dtar,mi;
  if(h==12)
    h=0;
  ds=s*6;

  mi=m+(float)s/60;
  dm=mi*6;
  dh=(h+(float)mi/60)*30;

  din=in*30;
  dtar=tar*30;

  if(din==360)
    din=0;
  if(din>dtar)
  {
      int e=dtar;
      dtar=din;
      din=e;
  }

  bool f=false,f1=false;

  if((din<ds && ds<dtar) || (din<dm && dm<dtar) || (din<dh && dh<dtar))
                f=true;
  if((din>ds || ds>dtar) || (din>dm || dm>dtar) || (din>dh || dh>dtar))
                f1=true;


  if(f && f1)
    puts("NO");
  else
    puts("YES");

  return 0;
}
