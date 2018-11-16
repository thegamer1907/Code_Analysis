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
//#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int maxn = 1e5+5;

int main(){

    int n,k;
    while(~scanf("%d%d",&n,&k)){
    int res=240-k;
    int t=0;
    int ans=0;
    int maxx=5*n*(n+1)/2;
    if(res>=maxx){
        printf("%d\n",n);
    }else{
        for(int i=1;i<=n;i++){
            t+=i*5;
            if(t==res){
                ans=i;
                break;
            }
            if(t>res){
                ans=i-1;
                break;
            }
        }
        printf("%d\n",ans);
    }
    }
}