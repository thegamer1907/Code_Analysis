#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <bitset>
#include <set>
#include <list>
#include <deque>
#include <map>
#include <queue>
#define mod 1000000007
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;
typedef long long ll;
const double PI=3.14159265358979;
const double eps=1e-6;
const ll _INF=1e18;
const int INF=1e9;
const int maxn=1000010;
const int maxm=1000010;

int n;
char s[10],t[200][10];
bool isok;

int main()
{
    while(~scanf("%s",s)){
        scanf("%d", &n);
        for(int i=0;i<n;++i)
            scanf("%s",t[i]);
        isok=false;
        for(int i=0;i<n;++i)
            if(!strcmp(s,t[i])){
                isok=true;
                break;
            }
        bool x,y;
        x=y=false;
        for(int i=0;i<n;++i){
            if(t[i][1]==s[0])
                x=true;
            if(t[i][0]==s[1])
                y=true;            
        }
        if(x&&y)    isok=true;
        puts(isok?"YES":"NO");
    }
    return 0;
}