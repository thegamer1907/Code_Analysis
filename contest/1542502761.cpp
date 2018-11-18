#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <ctime>
#include <map>
#include <set>
#include<iomanip>

#pragma comment(linker, "/STACK:102400000,102400000")
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1
#define clr(x) memset(x,0,sizeof(x))
#define cld(x) memset(x,-1,sizeof(x))
#define clx(x) memset(x,63,sizeof(x))
#define cln(x) memset(x,-64,sizeof(x))
#define rush() int T;scanf("%d",&T);while(T--)
#define pi 3.1415926

using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;
const ll llf = 0x3f3f3f3f3f3f3f3f;
const int maxn = (int) 1e6+7;
const double eps = 1e-10;
const ll mod = (int) 1e9+7;
const int dx[]= {0,1,0,-1};
const int dy[]= {1,0,-1,0};

string str1,str2;
bool flag1,flag2,flag3;
int n;
int main(){
    std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    cin >> str1 >> n;
    flag1 = flag2 = flag3 = false;
    for (int i = 1; i <= n; i++) {
        cin >> str2;
        if(str2[1] == str1[0]){
            flag1 = true;
        }
        if(str2[0] == str1[1]){
            flag2 = true;
        }
        if(str1[1] == str2[1] && str1[0] == str2[0]){
            flag3 = true;
        }
    }
    if((flag1 && flag2) || flag3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
