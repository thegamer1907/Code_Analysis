#include <iostream>
#include <algorithm>
#include <string.h>
#include <unordered_set>
#include <cmath>
#include <stdlib.h>
using namespace std;

int n, m[128], k, sum=0, bsum=0, large=0, blarge=1, from=0, bfrom=0;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> m[i]; k=m[i]?-1:1;
        if (sum+k<0) {
            sum=0;
            large=0;
            from=i+1;
        } else {
            sum+=k;
            large++;
            if (sum>bsum) {
                bsum=sum;
                blarge=large;
                bfrom=from;
            }
        }
    }

    for (int i=bfrom;i<bfrom+blarge;i++)
        m[i]=1-m[i];

    int ans=0;
    for (int i=0; i<n; i++)
        if (m[i])
            ans++;

    cout << ans << endl;
    return 0;
}