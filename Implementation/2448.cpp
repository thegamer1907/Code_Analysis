#include <iostream>

using namespace std;
int n, k;

int main(){
    cin >> n >> k;
    int ans = 0, sum = 0;
    while (1){
        if (sum + ((ans + 1) * 5) <= 240 - k) sum += (++ans) * 5;
        else break;
    } cout << min(ans, n);
}
