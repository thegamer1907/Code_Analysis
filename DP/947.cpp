#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a;
    int ans = 0;
    int dab = 0;
    int ones = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 0){
            dab = max(dab+1, 1);
            ans = max(ans, dab);
        }if(a == 1){
            dab = max(dab-1, -1);
            ones++;
        }
    }
    if(ans == 0) ans --;
    cout << ans + ones;








}
