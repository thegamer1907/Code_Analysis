#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
int main(){
    bool ans = 0;
    vector<int> arr,uniq;
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        vector<int> tmp(k);
        int t = 0;
        for(int j = 0; j < k; ++j){
            scanf("%d",&tmp[j]);
            t *= 2;
            t += tmp[j];
        }
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    uniq = arr;
    uniq.erase(unique(uniq.begin(),uniq.end()),uniq.end());
    if(uniq[0] == 0)
        ans = 1;
    for(int u : uniq)
        for(int v : uniq)
            if((u&v) == 0)
                ans = 1;
    if(ans)
        puts("YES");
    else
        puts("NO");
    // 0 0 1 1
    // 0 1 1 0
    // 1 0 0 1
}
