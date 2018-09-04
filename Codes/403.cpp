#include <iostream>
using namespace std;

const int maxn = 10000 + 7;
int n, t;
int a[maxn];

void init() {
    int sum, cnt;
    for(int i = 19; t < maxn; i++) {
        sum = 0, cnt = i;
        while(cnt) {
            sum += cnt % 10;
            cnt /= 10;
        }
        if(sum == 10) a[++t] = i;
    }
}

int main() {
    init();
    cin >>n;
    cout <<a[n] <<endl;
    return 0;
}
