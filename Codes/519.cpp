#include <bits/stdc++.h>

using namespace std;

int main (){
    int k; cin >> k;
    int cnt = 0;
    for (int i = 1; i <= 1000000000; i++){

        int tmp = i, s = 0;
        while (tmp){
            s += tmp % 10;
            tmp /= 10;
        }
        if (s == 10){
            cnt += 1;
            if (cnt == k){
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}
