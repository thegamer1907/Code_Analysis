#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b, c, d;
    cin >> n >> a >> b;
    m = n;
    int y = 0, x =1;
    while(x < m){
        x <<=1;
        y++;
    }
    if(a > b) swap(a, b);
    int cnt = 0, cur = 1;
    while(n > 0){
        if((a + n - 1)/ n == (b + n- 1)/n){
            n>>=1;
            cnt++;
        }else break;
    }
    if(cnt == 1){
        cout << "Final!";
    }else{
        cout << y - cnt + 1;
    }


    return 0;
}
