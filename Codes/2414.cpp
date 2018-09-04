#include <bits/stdc++.h>

using namespace std;

//#define int long long
#define double long double

int n;
int a[1000100];
int cnt[10000010];
int mas[10000010];
char used[10000010];

main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    for(int i = 2; i <= 10000000; i++){
        if(used[i]) continue;
        for(int j = i; j <= 10000000; j += i){
            mas[i] += cnt[j];
            used[j] = true;
        }
    }
    for(int i = 1; i <= 10000000; i++){
        mas[i] += mas[i - 1];
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        l = min(l, 10000000);
        r = min(r, 10000000);
        cout << mas[r] - mas[l - 1] << '\n';
    }
}
