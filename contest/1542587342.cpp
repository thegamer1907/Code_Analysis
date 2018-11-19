#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
#define inf 0x7fffffff
#define mod 10000
#define met(a,b) memset(a,b,sizeof a)
typedef long long ll;
using namespace std;
const int N = 5000+10;
const int M = 1000000;
int n,m;
char str[100][100];
char s[5];
int main() {
    scanf("%s",s);
    scanf("%d",&n);
    int f1=0,f2=0;
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        int len=strlen(str[i]);
        if(str[i][0]==s[1])f1=1;
        if(str[i][len-1]==s[0])f2=1;
        if(str[i][0]==s[0]&&str[i][1]==s[1])f1=1,f2=1;
    }
    if(f1==1&&f2==1)puts("YES");
    else puts("NO");
    return 0;
}