#include <bits/stdc++.h>

using namespace std;

int a[50];

bool cmp(int a, int b){
    return (a > b);
}

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] > 0){
            cnt++;
        }
    }
    cout << cnt;
}
