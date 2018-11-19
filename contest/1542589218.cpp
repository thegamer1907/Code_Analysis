#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int Maxn=1010;

char str[Maxn][Maxn]; int N;


int main()
{

  scanf("%s",str[0]); scanf("%d",&N);
  for(int i=1;i<=N;i++) scanf("%s",str[i]);

  bool bk1=false,bk2=false; bool bk=false;
  for(int i=1;i<=N;i++)
  {
    if(str[i][0]==str[0][1]) bk2=true;
    if(str[i][1]==str[0][0]) bk1=true;
    if(str[i][0]==str[0][0] && str[i][1]==str[0][1]) bk=true;
  }

  if(bk==true || (bk1==true && bk2==true)) printf("YES\n");
  else printf("NO\n");

  return 0;
}