#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;
#define LL long long
#define mp make_pair
#define fr first
#define sc second
#define pb push_back
#define lc (x<<1)
#define rc ((x<<1)|1)
const int N=105;
char s[N][5],t[5];
int main(){
   // freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    int i,j,n;
    scanf("%s",t);
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%s",s[i]);
        if (s[i][0]==t[0]&&s[i][1]==t[1]) {puts("YES");return 0;}
    }
    for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
      if (s[i][1]==t[0]&&s[j][0]==t[1]) {puts("YES");return 0;}
    puts("NO");

    return 0;
}
