#include <bits/stdc++.h>
using namespace std;

const int M = 1e2 + 7;
int a[M], b[M];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int res = 0;
    sort(a, a + n);
    sort(b, b + m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((b[j] > 0) && abs(a[i] - b[j]) <= 1){
                res++;
                b[j] = -1;
                break;
            }
        }
    }

    cout << res << endl;

    return 0;
}
