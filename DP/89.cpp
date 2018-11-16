#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, m, a[100], b[100], ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for(int j = 0; j < m; j++)
        cin >> b[j];
    sort(a, a+n);
    sort(b, b+m);
    int i = 0, j = 0;
    while(i < n && j < m){
        if(abs(a[i]-b[j]) <= 1) {
            ans += 1;
            i += 1;
            j += 1;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans;
    return 0;
}
