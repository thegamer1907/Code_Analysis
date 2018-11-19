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
const int N=100;
int a[(1<<4)];
bool check(int i,int j){
    int t=i^j;
    if (((i|t)==t)&&((j|t)==t)) return 1;
     else return 0;
}
int main(){
  //  freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++){
        int t=0;
        for (j=0;j<k;j++){
            int x;scanf("%d",&x);
            t=(t<<1)+x;
        }
        a[t]++;
    }
    if (a[0]) {puts("YES");return 0;}
    for (i=1;i<(1<<4);i++) if (a[i])
     for (j=1;j<(1<<4);j++) if (a[j])
      if (check(i,j)) {puts("YES");return 0;}
    puts("NO");
    return 0;
}
