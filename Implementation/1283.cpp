#include<bits/stdc++.h>

#define int long long int
#define mp make_pair
using namespace std;

int32_t main() {
    int n,t;
    scanf("%lld", &n);
    scanf("%lld", &t);
    string s;
    cin >> s;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ) {
            if(s[j] == 'B' && s[j+1] == 'G'){
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j += 2;
            }
            else{
                j++;
            }
        }
    }
    cout << s;
    return 0;
}