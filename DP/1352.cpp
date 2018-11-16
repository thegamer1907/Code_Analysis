#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int par[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            if(a[0] == 1){
                par[0] = -1;
            }
            else{
                par[0] = 1;
            }
        }
        else{
            if(a[i] == 1){
                par[i] = par[i - 1] -1;
            }
            else{
                par[i] = par[i - 1] + 1;
            }
        }
    }
    int mx = -n;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(i == 0){
                mx = max(mx, par[j]);
            }
            else{
                mx = max(mx, par[j] - par[i - 1]);
            }
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        c += a[i];
    }
    cout << mx + c;
}
