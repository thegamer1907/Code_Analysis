#include <bits/stdc++.h>
#include <cstdio>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
#define I int
#define ll long long int
#define B bool
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d ",x)
#define pin(x) printf("%d\n",x )

#define C char
#define ss(x) scanf("%s",x)

#define sl(x) scanf("%lld",&x)
#define pl(x) printf("%lld",x)
#define pln(x) printf("%lld\n",x )

#define pc(x) printf(x)
#define pb push_back
#define sc(x) scanf("%c",&x)
#define T true
#define N 101000

C s[3],c[3];
I n;
B atlasst,atfirst;
int main(){

  ss(s);

  si(n);

  s[2]=s[0];

  while(n--){

    ss(c);

    if(((s[0]==c[0])&&(s[1]==c[1]))||((s[1]==c[0])&&(s[2]==c[1]))){
      return !pc("YES\n");
    }

    if(c[0]==s[0]&&c[1]==s[1]){
      return !pc("YES\n");
    }

    if(c[1]==s[0]){
      atfirst=T;

      if(atlasst)
        return !pc("YES\n");
      else
        continue;

    }

    if(c[0]==s[1]){
      atlasst=T;

      if(atfirst)
        return !pc("YES\n");
      else
        continue;
    }

  }
  
  pc("NO\n");

  return 0;
}