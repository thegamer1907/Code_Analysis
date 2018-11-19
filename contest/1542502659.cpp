#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e6+7;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;
int h, m, s, a, b;
map<double, int>mp;
double tim[25]={0.0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,
  4.5,5.0,5.5,6.0,6.5,7.0,7.5,8.0,8.5,9.0,9.5,10.0,10.5,11.0,
  11.5,12.0,
};
int main(int argc, char const *argv[]){
  while(~scanf("%d%d%d%d%d", &h, &m, &s, &a, &b)){
    mp.clear();
    int h1=0, h2=0, m1=0, m2=0, s1=0, s2=0;
    int tmp;
    if(s == 0){
      mp[0.0] = mp[12.0] = 1;
      tmp = m/5;
      m1 = m2 = tmp;
      if(m%5){
        m2 = tmp + 1;
        mp[tmp + 0.5] = 1;
      }else mp[tmp*1.0] = 1;
      h1 = h2 = h;
      if(m){
        h2 = h + 1;
        if(h==12){
          mp[0.5]=1;
        }else{
          mp[h+0.5]=1;
        }
      }else{
        mp[h*1.0] = 1;
      }
    }else{
      tmp = s/5;
      s1 = s2 = tmp;
      if(s%5){
        s2 = tmp + 1;
        mp[tmp+0.5] = 1;
      }else{
        mp[tmp*1.0] = 1;
      }
      tmp = m/5;
      m1 = tmp;m2 = tmp + 1;
      mp[tmp+0.5]=1;
      h1 = h;
      h2 = h + 1;
      if(h==12){
        mp[0.5]=1;
      }else{
        mp[h+0.5]=1;
      }
    }
    if(mp[0.0])mp[12.0]=1;
    if(mp[12.0])mp[0.0]=1;
    if(a>b)a^=b^=a^=b;
    int flag = 0,no=0;
    for(double i = a;i<=b;i+=0.5){
      if(mp[i]){
        no = 1;
      }
    }
    for(double i = b;i!=a&&flag==0;i+=0.5){
      if(mp[i]){
        flag = 1;
      }
      if(i==12.0)i=0.0;
    }
/*    for(int i = 0; i < 25; ++i){
      printf("%d %f\n", mp[tim[i]], tim[i]);
    }*/
    if(flag==0||no==0)printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}