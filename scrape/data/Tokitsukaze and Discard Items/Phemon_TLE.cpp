#include<bits/stdc++.h>
using namespace std;
long long n, m, k;
long long p[100010];
long long tot = 0;
long long kk = 0, kkk = 0;
long long ans;
bool flag = 0;
int main(){
    cin >> n >> m >> k;
    for (int i = 1; i <= m;i++)
        scanf("%lld", &p[i]);
    tot = 1;
    ans = 1;
    while (tot <= m){
        if (p[tot] <= kk)
            kkk++, tot++;
        else{
            if(kkk){
                kk += kkk;
                kkk = 0;
                ans++;
            }
            else
                kk += k;
        }
    }
    cout << ans;
}