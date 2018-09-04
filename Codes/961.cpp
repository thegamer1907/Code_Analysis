#include <cstdio>  
#include <cmath>  
#include <algorithm>  
#include <iostream>  
#include <cstring>  
#include <vector>  
#include <map>  
using namespace std;  
#define maxn 111111  
  
int n, k;  
char a[maxn], b[maxn];  
  
int main () {  
    cin >> n >> k;  
    cin >> a;  
    for (int i = 0; i < n; i++) b[i] = a[i];  
    int ans = 0;  
    int l = 0, r = 0, cnt = 0;  
    for (int i = 0; i < n; i++) {  
        if (a[i] != 'a') {  
            if (cnt < k) {  
                r++;  
                cnt++;  
            }  
            else {  
                while (l < n && a[l] != 'b') l++;  
                l++;  
                r++;  
            }  
        }  
        else r++;  
        ans = max (ans, r-l);  
    }  
    l = 0, r = 0, cnt = 0;  
    for (int i = 0; i < n; i++) {  
        if (a[i] != 'b') {  
            if (cnt < k) {  
                r++;  
                cnt++;  
            }  
            else {  
                while (l < n && a[l] != 'a') l++;  
                l++;  
                r++;  
            }  
        }  
        else r++;  
        ans = max (ans, r-l);  
    }  
    cout << ans << "\n";  
    return 0;  
}  
