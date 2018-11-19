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
const int maxn=100010;
const int maxm=1000010;

int n,k;
set<int> s;
bool isok;

int main()
{
    while(~scanf("%d %d",&n, &k)){
        for(int i=0;i<n;++i){
            int num=0;
            for(int j=0;j<k;++j){
                int x;
                scanf("%d", &x);
                num|=(x<<j);
            }
            s.insert(num);
        }
        if(!*s.begin()) isok=true;
        else{
            isok=false;
            for(auto &p:s){
                int x=p^15;
                for(int i=1;i<16;++i)
                    if((i&x)==i && s.find(i)!=s.end()){
                        isok=true;
                        break;
                    }
            }
        }
        puts(isok?"YES":"NO");
    }
    return 0;
}