#include<bits/stdc++.h>
#define ll long long
#define RG register
#define il inline
#define N 110
using namespace std;
char s[3];
char t[N][3];
int n;bool flag1,flag2;
int main(){
  scanf("%s",s+1);scanf("%d",&n);
  for(int i=1;i<=n;++i){
    scanf("%s",t[i]+1);
    if(t[i][1]==s[1]&&t[i][2]==s[2])cout<<"YES",exit(0);
    if(t[i][1]==s[2])flag1=true;
    if(t[i][2]==s[1])flag2=true;
  }if(flag1&&flag2)cout<<"YES";
  else   cout<<"NO";
  return 0;
}
