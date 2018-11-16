#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, m, ccount = 0;
    cin >> n;
    vector <int> v (n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v. begin(), v.end());
    cin >> m;
    vector <int> v1 (m);
    for (int i = 0; i < m; i++){
        cin >> v1[i];
    }
    sort(v1. begin(), v1.end());
    for(int i = 0, j = 0; i<v.size()&& j<v1.size();){
        if(v1[j]-2>=v[i]){
            i++;
        }
        else{
            if(abs(v[i] - v1[j])<=1){
                ccount ++;
                i ++;
            }
            j ++;
        }
    }
    cout<<ccount;
}