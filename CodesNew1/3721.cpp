#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <map>
#include <set>
#include <string.h>
#include <queue>
#define MAX 1000000005
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m;
    cin >> n >> m;
    int a[n],maxi=0,sum=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        maxi=max(maxi, a[i]);
    }
    int aa=maxi+m;
    int b=maxi;
    for (int i=0; i<n; i++) {
        sum+=b-a[i];
    }
    int ans;
    if (sum<=m) ans=ceil(abs(sum-m)/(double)n)+b;
    else ans=b;
    //cout << ans << endl;
    cout << ans << " " << aa << endl;
    return 0;
}
