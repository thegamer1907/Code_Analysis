#include<bits/stdc++.h>
using namespace std;

const int N = 150;
int arr[N], arr_1[N];
map<int, int> mp, mp_1;

int main(){
    int n, m;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        mp[arr[i]]++;
    }

    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr_1[i]);
        mp_1[arr_1[i]]++;
    }

    int ans = 0;

    sort(arr, arr + n);
    sort(arr_1, arr_1 + m);

    for(int i = 0; i < n; i++) {
        if(mp_1[arr[i] - 1] > 0) {
            mp_1[arr[i] - 1]--;
            ans++;
            continue;
        }
        if(mp_1[arr[i]] > 0) {
            mp_1[arr[i]]--;
            ans++;
            continue;
        }
        if(mp_1[arr[i] + 1] > 0) {
            mp_1[arr[i] + 1]--;
            ans++;
            continue;
        }
    }

    printf("%d\n", ans);
    return 0;
}
