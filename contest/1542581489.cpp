#include <iostream>
#include <cstring>
using namespace std;

bool check_valid(int ch, int k) {
    for (int i = 0; i< k; i++) {
        int in_sum = 0;
        int out_sum = 0;
        for (int idx = 0; idx < (1<<k); idx++) {
            if (ch & (1 << idx)) {
                if (idx & (1 << i))
                    in_sum++;
                else
                    out_sum++;
            }
        }
        if (in_sum > out_sum)
            return false;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;


    int cts[16];
    memset(cts, 0, sizeof(cts));
    for (int i = 0; i < n; i++) {
        int idx = 0;
        for (int l = 0; l < k; l++) {
            int bit;
            cin >> bit;
            idx *= 2;
            idx += bit;
        }

        cts[idx]++;
    }

    int MAX = 1;
    //for (int i =0; i < 16; i++)
      //  cout << cts[i] << endl;

    int num_regions = 1 << k;
    int big = 1 << num_regions;
    for (int i = 1; i < big; i++) {
        bool flag = false;
        for (int idx=0; idx < num_regions; idx++) {
            if (i & (1 << idx) && cts[idx] == 0) {
                flag = true;
                break;
            }
        }

        if (!flag) {
            if (check_valid(i, k)) {
                cout << "YES\n";
                exit(0);
            }
        }
    }   


    cout << "NO\n";
}
