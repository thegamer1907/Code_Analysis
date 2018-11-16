#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int m, n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i  = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(abs(a[i] - b[j]) <= 1){
                ans++;
                a[i] = -1;
                b[j] = -1;
                j = m;
            }
        }
    cout << ans;
}
