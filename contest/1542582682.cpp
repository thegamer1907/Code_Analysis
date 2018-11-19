#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long
int h,m,s,s1,s2;
map<int,int> mp;
int main(){

  scanf("%d %d %d %d %d",&h,&m,&s,&s1,&s2);
  h=h*5;
  if(h==60)
    h=0;
  h=h*60;
  if(m!=0||s!=0)
    h++;
  m=m*60+s;
  s=s*60;
  s1=s1*5*60;
  if(s1==60)
    s1=0;
  s2=s2*5*60;
  if(s2==3600)
    s2=0;
  if(s2<s1)
    swap(s1,s2);
  mp[h]=1;mp[m]=1;mp[s]=1;
  int flag1=0,flag2=0;
  for(int i=s1+1;i<s2;i++){
    if(mp[i]==1){
       flag1=1;
    }
  }
  for(int i=s2+1;i<=3599;i++){
    if(mp[i]==1){
       flag2=1;
    }
  }
  for(int i=0;i<s1;i++){
    if(mp[i]==1){
       flag2=1;
    }
  }
  if(flag1==1&&flag2==1){
    printf("NO\n");
  }
  else
    printf("YES\n");
  return 0;
}
