#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,cnt = 0,ar,cnt1 = 0,d = 0;
    vector <int> a;
    cin >> n >> t;
    for (int i = 0 ; i < n ; i ++){
        cin >> ar;
        a.push_back(ar);
    }
    for (int i = 0 ; i < n ; i ++){
        cnt1 += a[i];

        while(cnt1 > t){
            cnt1 -= a[d ++];
        }
        cnt = max(cnt,i - d + 1);
    }
    cout << cnt;
    return 0;
}
