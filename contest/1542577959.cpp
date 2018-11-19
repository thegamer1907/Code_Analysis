#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int nums[100005][10];
int cur_state[10];
int n, k;

bool check_val() {
    bool check = true;
    for (int i = 0; i < k; i++) {
        if (cur_state[i] > 0) {
            check = false;
            break;
        }
    }
    
    return check;
}

bool solve(int idx, int sel_cnt) {
    
    if (sel_cnt != 0 && check_val())
        return true;
    
    if (idx == n)
        return false;
    
    for (int i = 0; i < k; i++) {
        int add = nums[idx][i] == 0 ? -1 : 1;
        cur_state[i] += add;
    }
    
    bool re = solve(idx + 1, sel_cnt + 1);
    
    if (re)
        return true;
    
    for (int i = 0; i < k; i++) {
        int add = nums[idx][i] == 0 ? -1 : 1;
        cur_state[i] -= add;
    }
    re = solve(idx + 1, sel_cnt);
    
    
    return re;
}

bool exist_check[33] = {false,};
int main() {
    
    cin >> n >> k;
    int cur[5];
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a = 0;
        for (int j = 0 ;j < k; j++) {
            cin >> cur[j];
            a += cur[j] * pow(2, k - j - 1);
        }
        if (!exist_check[a]) {
            for (int j = 0 ;j < k; j++)
                nums[cnt][j] = cur[j];
            cnt++;
            exist_check[a] = true;
        }
    }
    n = cnt;
    if (solve(0, 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}