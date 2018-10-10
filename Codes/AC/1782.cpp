#include<bits/stdc++.h>
using namespace std;

// returns all numbers less than x in the row and if x exists in the row
//pair<int, bool> func(int row, long long int x, int column)
//{
//    int low = 0, high = column;
//    int res = 0;
//    bool equals = 0;
//    while (low <= high) {
//        int mid = (low + high) / 2;
//        long long int temp = (long long int)mid * row;
//        if (temp < x) {
//            res = max(res, mid);
//            low = mid + 1;
//        }
//        else if (temp == x) {
//            equals = 1;
//            high = mid - 1;
//        }
//        else {
//            high = mid - 1;
//        }
//    }
//    return make_pair(res, equals);
//}

int main()
{
    int n, m;
    long long int k;
    scanf("%d%d%I64d", &n, &m, &k);
    long long int low = 1, high = (long long int)n * m;
    long long int ans = 0;
    while (low <= high) {
        long long int mid = (low + high) / 2;
        long long int all_less = 0, all_equal = 0;
        for (int i = 1; i <= n; i++) {
            all_less += min((mid - 1) / i, (long long int)m);
        }
        //cout << mid << ' ' << all_less << ' ' << all_equal << endl;
        if (all_less < k) {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}
