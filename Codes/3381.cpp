#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <limits.h>
#define left (now<<1)
#define right ((now<<1)+1)
#define mid ((l+r)>>1)
#define fst first
#define snd second
#define sfn scanf("%d",&n)
#define sfnm scanf("%d%d",&n,&m)
#define sft scanf("%d",&t)
using namespace std;
typedef long long lint;

const int MAXN = 110;

lint n,l,r;

bool pd(lint n,lint k){
    lint a,b; a = b = 0; lint p = n;
    while(n != 0){
        a += min(n,k); n -= min(n,k);
        b += n / 10; n -= n / 10;
    }
    return a >= (p + 1) / 2;
}

int main(){
    scanf("%I64d",&n); l = 1; r = n;
    while(l < r){
        if(pd(n,mid)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    printf("%I64d\n",l);
    return 0;
}
