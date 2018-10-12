#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>
#include <string>

using namespace std;


int main() {
    int n,m;cin>>n>>m;
    vector<int>a(n);
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int t = 0;
    for(int i = 0;i < n-1;i++){
        t +=a[n-1]-a[i];
    }
    if(m<=t) {
        cout << a[n - 1]<<" ";
    }
    else {
        if ((m - t) % n == 0)
            cout << a[n - 1] + (m - t) / n << " ";
        else
            cout << a[n - 1] + ((m - t) / n) + 1 << " ";
    }
    cout<<a[n-1]+m;


}