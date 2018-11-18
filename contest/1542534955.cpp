#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define N 432000
int h,m,s,t1,t2;
int k[N];
int main()
{
  scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
  bool prime=true;
  bool flag=true;
  t1=t1%12,t2=t2%12,h=h%12;
  int x=s*60*12,y=m*60*12+s*12,z=h*3600+m*60+s;
  k[x]=k[y]=k[z]=1;
  t1=t1*3600; t2=t2*3600;
  int xx=min(t1,t2);
  int yy=max(t1,t2);
  for(int i=xx;i<=yy;i++){
    if(k[i]==1){
      prime=false;
      break;
    }
  }
  if(prime){
    cout<<"YES"<<endl;
  }else{
    for(int i=0;i<=xx;i++){
      if(k[i]==1){
        flag=false;
        break;
      }
    }
    if(flag){
      for(int i=yy;i<N;i++){
        if(k[i]==1){
          flag=false;
          break;
        }
      }
    }
    if(flag){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}