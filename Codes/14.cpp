#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <stack>
#include <queue>
#include <cstdio>
#include <cctype>
#include <bitset>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#define fuck(x) cout<<"["<<x<<"]";
#define FIN freopen("input.txt","r",stdin);
#define FOUT freopen("output.txt","w+",stdout);
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int maxn = 1e5+5;
double a[maxn];

int main(){
#ifndef ONLINE_JUDGE
    FIN
    #endif
    int n,l;
    while(scanf("%d%d",&n,&l) !=EOF){
        for(int i=0;i<n;i++){
            scanf("%lf",&a[i]);
        }
        sort(a,a+n);
        double d1=a[0]-0;
        double d2=l-a[n-1];
        double maxx=-1;
        for(int i=1;i<n;i++){
            double d=(a[i]-a[i-1])/2;
            if(d>maxx){
                maxx=d;
            }
        }
        double ans=max(d1,d2);
        ans=max(ans,maxx);
        printf("%.9lf\n",ans);
    }
    return 0;
}