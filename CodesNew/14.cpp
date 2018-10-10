#include <bits/stdc++.h>
using namespace std;


int main() {
    long long l;
    double nach,kon, dist, ans;
    int var;
    int n;
    cin >> n >> l;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    nach = arr[0];
    kon = l-arr[n-1];
    var = 0;
    for(int i = 0;i<n-1;i++){
        var = max(var,arr[i+1]-arr[i]);
        //cout << var << endl;
    }
    dist = var;
    dist = dist/2;
    //cout << dist << kon << nach << endl;
    nach = max(kon,nach);
    printf("%lf",max(nach,dist));
    return 0;
}
