#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
int main(){
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    int ans = 0;
    if(h == t1 && m+s > 0 || t1*5 == m && s > 0)
        ans++;
    else
        for(int b = t1*5+1; b!= t2*5; b = (b+1)%60){
            if(m == b || s == b || h*5 == b){
                ans ++;
                break;
            }
        }
    if(h == t2 && m+s > 0 || t2*5 == m && s > 0)
        ans++;
    else
        for(int b = t2*5+1; b!= t1*5; b = (b+1)%60){
            if(m == b || s == b || h*5 == b){
                ans ++;
                break;
            }
        }
    if(ans == 2)
        puts("NO");
    else
        puts("YES");
}
