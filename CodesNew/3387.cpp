#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a, a+n);

    int ans1 = 0,maxi =0;
    for(int i=0; i<n; i++){
        maxi = max(maxi, a[i]);
    }

    for(int i=0; i<n; i++){
        ans1+= maxi - a[i];
    }

    if(ans1 >= m)
        ans1 = maxi;
    else
        ans1 = maxi + (m-ans1)/n + bool((m-ans1)%n);
    cout << ans1 << " " << maxi+m;
    return 0;
}
