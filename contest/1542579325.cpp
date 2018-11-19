#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cassert>
#include <memory.h>
using namespace std;
typedef long long ll;

int cnt[16];
vector<int> arr;

int main () {
    int N, K;
    scanf("%d%d", &N, &K);
    for(int i=0;i<N;i++) {
        int off = (1<<K)-1;
        for(int j=0, tmp;j<K;j++) {
            cin >> tmp;
            if(tmp) off -= (1 << j);
        }
        cnt[off]++;
        arr.push_back(off);
    }
    for(int i=0;i<N;i++) {
        int on = 0;
        for(int j=0;j<K;j++) {
            if(!(arr[i] & (1<<j))) {
                on += (1<<j);
            }
        }
        for(int j=0;j<(1<<K);j++) {
            if((on | j) == j && cnt[j] > 0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
