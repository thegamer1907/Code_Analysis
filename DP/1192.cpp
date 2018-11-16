#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    int n;
    vector<int> bins;
    vector<int> sums;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        bins.push_back(x);
        if (!sums.empty()) sums.push_back(sums[i-1]+x);
        else sums.push_back(x);
    }
    int maxone = 0;
    for (int l = 1; l <= n; l++) {
        for (int s = 0; s <= n-l; s++) {
            int subsum = 0;
            int rest = 0;
            if (s != 0) {
                rest += sums[s-1];
            }
            rest += sums[n-1] - sums[s+l-1];
            for (int e = s; e < s+l; e++) {
                subsum += bins[e];
            }
            int total = rest + l - subsum;
            if (total > maxone) maxone = total;
        }
    }
    printf("%d\n", maxone);
    
    
    return 0;
}
