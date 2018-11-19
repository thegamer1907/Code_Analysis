#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sys/time.h>
#include <cmath>
#include <tuple>
#include <queue>

using namespace std;

void solve(int n, int k, vector< vector<int> > p) {
     bool flag = false;
    if (k == 1) {
        for (int i = 0; i < n; i++) {
            if (p[i][0] == 0) {
                flag = true;
                break;
            }
        }
    } else if(k == 2){
        vector<bool> a(2, false);
        for (int i = 0; i < n; i++) {
            if (p[i][0] == 0 && p[i][1] == 0) {
                flag = true;
                break;
            } else if (p[i][0] == 0 && p[i][1] == 1) {
                a[0] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0) {
                a[1] = true;
            }
        }
        if (a[0] && a[1]) {
            flag = true;
        }
    } else if(k == 3){
        vector<bool> a(6, false);
        for (int i = 0; i < n; i++) {
            if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 0) {
                flag = true;
                break;
            } else if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 1) {
                if (a[1] || a[2] || a[3]) {
                    flag = true;
                    break;
                }
                a[0] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 0) {
                if (a[0] || a[2] || a[4]) {
                    flag = true;
                    break;
                }
                a[1] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 0) {
                if (a[0] || a[1] || a[5]) {
                    flag = true;
                    break;
                }
                a[2] = true;
            } else if (p[i][0] == 1 && p[i][1] == 1 && p[i][2] == 0) {
                if (a[0]) {
                    flag = true;
                    break;
                }
                a[3] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 1) {
                if (a[1]) {
                    flag = true;
                    break;
                }
                a[4] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 1) {
                if (a[2]) {
                    flag = true;
                    break;
                }
                a[5] = true;
            }
        }
    } else if(k == 4){
        vector<bool> a(14, false);
        for (int i = 0; i < n; i++) {
            if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 0 && p[i][3] == 0) {
                flag = true;
                break;
            } else if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 0 && p[i][3] == 1) {
                if (a[1] || a[2] || a[3] || a[7] || a[13] || a[8] || a[9]) {
                    flag = true;
                    break;
                }
                a[0] = true;
            } else if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 1 && p[i][3] == 0) {
                if (a[0] || a[2] || a[3] || a[5] || a[6] || a[8] || a[10]) {
                    flag = true;
                    break;
                }
                a[1] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 0 && p[i][3] == 0) {
                if (a[0] || a[1] || a[3] || a[4] || a[6] || a[13] || a[11]) {
                    flag = true;
                    break;
                }
                a[2] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 0 && p[i][3] == 0) {
                if (a[0] || a[1] || a[2] || a[4] || a[5] || a[7] || a[12]) {
                    flag = true;
                    break;
                }
                a[3] = true;
            } else if (p[i][0] == 0 && p[i][1] == 0 && p[i][2] == 1 && p[i][3] == 1) {
                if (a[8] || a[2] || a[3]) {
                    flag = true;
                    break;
                }
                a[4] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 0 && p[i][3] == 1) {
                if (a[13] || a[1] || a[3]) {
                    flag = true;
                    break;
                }
                a[5] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 0 && p[i][3] == 1) {
                if (a[7] || a[1] || a[2]) {
                    flag = true;
                    break;
                }
                a[6] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 1 && p[i][3] == 0) {
                if (a[6] || a[0] || a[3]) {
                    flag = true;
                    break;
                }
                a[7] = true;
            } else if (p[i][0] == 1 && p[i][1] == 1 && p[i][2] == 0 && p[i][3] == 0) {
                if (a[4] || a[0] || a[1]) {
                    flag = true;
                    break;
                }
                a[8] = true;
            } else if (p[i][0] == 1 && p[i][1] == 1 && p[i][2] == 1 && p[i][3] == 0) {
                if (a[0]) {
                    flag = true;
                    break;
                }
                a[9] = true;
            } else if (p[i][0] == 1 && p[i][1] == 1 && p[i][2] == 0 && p[i][3] == 1) {
                if (a[1]) {
                    flag = true;
                    break;
                }
                a[10] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 1 && p[i][3] == 1) {
                if (a[2]) {
                    flag = true;
                    break;
                }
                a[11] = true;
            } else if (p[i][0] == 0 && p[i][1] == 1 && p[i][2] == 1 && p[i][3] == 1) {
                if (a[3]) {
                    flag = true;
                    break;
                }
                a[12] = true;
            } else if (p[i][0] == 1 && p[i][1] == 0 && p[i][2] == 1 && p[i][3] == 0) {
                if (a[5] || a[0] || a[2]) {
                    flag = true;
                    break;
                }
                a[13] = true;
            }
        }
    }
    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    struct timeval start,end;
    long long span;
    int n, k;

    gettimeofday(&start,NULL);

    std::cin >> n >> k;
    vector< vector<int> > p(n, (vector<int>(k)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> p[i][j];
        }
    }
    solve(n, k, p);

    gettimeofday(&end,NULL);
    span = (end.tv_sec -start.tv_sec)*1000000LL + (end.tv_usec - start.tv_usec);
    std::cerr << "--Total Time: " << span/1000 << "ms" << endl;
    return 0;
}
