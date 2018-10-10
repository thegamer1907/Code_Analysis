#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    
    double lanternLocations[1000];
    
    for (int i=0;i<n;i++) {
        cin>>lanternLocations[i];
    }
    sort(lanternLocations,lanternLocations+n);
    double ans = lanternLocations[0];
    for (int i=0;i<n-1;i++) {
        if ((lanternLocations[i+1]-lanternLocations[i])/2 > ans) {
            ans = (lanternLocations[i+1]-lanternLocations[i])/2;
        }
    }
    if ((l-lanternLocations[n-1]) > ans) {
        ans = (l-lanternLocations[n-1]);
    }
    cout.precision(20);
    cout<<ans<<endl;
}