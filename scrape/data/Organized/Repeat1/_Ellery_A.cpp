#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define mp make_pair
const int maxn = 4e5+5;
const int MOD = 1e9+7;
#define mod(x) x % MOD
#define INF 0x3f3f3f3f

int n, k;
int a[maxn];
int b[maxn];
int sum[maxn];
bool check(){
    for(int i = 1;i + k - 1 <= n;i++){
        int tmp = sum[i-1] - sum[0] + sum[n] - sum[i + k - 1];
        if(tmp == 0 || tmp + k == n) return true;
    }
    return false;
}
int check2(){
    if(k * 2 < n || k == 1) return false;
    int len = n - k - 1;
    for(int i = 2;i <= len;++i)
    {
        if(a[i] != a[i - 1] || a[n - i + 1] != a[n - i + 2]) return false;
    }
    if(a[len] == a[len + 1] || a[n - len] == a[n - len + 1] || a[1] == a[n]) return false;
    return true;
}
string str;

int main(){
    while(~scanf("%d %d", &n, &k)){
        cin>>str;
        for(int i = 0;i < n;i++){
            a[i + 1] = str[i] - '0';
            sum[i + 1] = sum[i] + a[i + 1];
        }
        bool flag = 0;
        if(check()){
            puts("tokitsukaze");
        }
        else if(check2()){
            puts("quailty");
        }
        else{
            puts("once again");
        }


    }
    return 0;
}