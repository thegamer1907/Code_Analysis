#include <bits/stdc++.h>

using namespace std;

int n, k, dpa[100100], dpb[100100];
char c[100100];
int rs;

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> c[i];
    for(int i = 1; i <= n; i++){
        dpa[i] = dpa[i - 1] + (c[i] == 'a');
        dpb[i] = dpb[i - 1] + (c[i] == 'b');
    }
    for(int i = 1; i <= n; i++){
        int st = i;
        int dr = n;
        int mid;
        while(st <= dr){
            mid = st + dr >> 1;
            if(dpa[mid] - dpa[i - 1] <= k)
                st = mid + 1;
            else dr = mid - 1;
        }
        rs = max(rs, min(n, dr) - i + 1);
        st = i;
        dr = n;
        while(st <= dr){
            mid = st + dr >> 1;
            if(dpb[mid] - dpb[i - 1] <= k)
                st = mid + 1;
            else dr = mid - 1;
        }
        rs = max(rs, min(n, dr) - i + 1);
    }
    cout << rs;
    return 0;
}