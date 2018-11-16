#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int arr[s.size()];
    arr[0] = 0;
    for (int i = 1; i < s.size(); i++) {
        arr[i] = (s[i - 1] == s[i]);
        arr[i] += arr[i - 1];
    }
    
    int n; cin >> n;
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << arr[r - 1] - arr[l - 1] << endl;
    }
}
