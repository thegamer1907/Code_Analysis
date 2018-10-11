#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
const int INF = 0x3f3f3f3f;
int n;
int a[N];
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d", a+i);
    int ans = INF, pos = INF;
    for(int i = 0; i < n; ++i){
        if(a[i] <= i){
            //cout << i << " " << a[i] << endl;
            if(ans != 0){
                return 0 * printf("%d\n", i + 1);
            }
        }else{
            int t = (a[i] - i - 1) / n + 1;
            //cout << i << "  " << t << " " << ans << endl;
            if(t < ans){
                ans = t;
                pos = (i + 1);
            }
        }
    }
    printf("%d\n", pos);

    return 0;
}
