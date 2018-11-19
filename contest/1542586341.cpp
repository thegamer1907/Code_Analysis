#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <tuple>
#include <functional>
#include <math.h>
#include <string.h>
#include <string>
#include <bitset>
#include <stdlib.h>
#include <time.h>

#define INF 999999999
#define INFLL 999999999999999

#define s1(x) scanf("%d", &x)
#define s2(x,y) scanf("%d %d",&x,&y)
#define s3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define p1(x) printf("%d\n", x)
#define p2(x,y) printf("%d %d\n",x,y)
#define p3(x,y,z) printf("%d %d %d\n",x,y,z)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<int, ii> intii;
typedef pair<ii, int> iiint;
typedef pair<ii, ii> pii;
typedef tuple<int, int, int> iii;

/////////////////////////////////////////////////////

const int M = 10005;

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////






int main(){
    int h,m,s,t,tt; scanf("%d %d %d %d %d", &h, &m, &s, &t, &tt);
    if(t > tt) swap(t,tt);
    m /= 5;
    s /= 5;
    int ttt = t;
    
    while(t <= tt){
      //  puts("ve");
        if(t==tt) {
            puts("yes");
            return 0;
        }
        if(t == h  || t == m || t == s) break;
        
        t++;
    }
    
    while(1){
       // puts("Sve");
        if(tt==ttt){
            puts("YES");
            return 0;
        }
        if(tt == h || tt == m || tt == s) break;
        tt++;
        tt%=13;
    }
    
    
    
    
    
    puts("no");
    return 0;
}





























