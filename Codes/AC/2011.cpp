#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;
long long i,n,a[200000],ans,k;
map<long long, long long> suff, preff;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    cin >> n >> k;
    for(i = 0; i < n; i++)
        cin >> a[i], suff[a[i]]++;
    for(i = 0; i < n; i++){
        if(i) preff[a[i - 1]]++;
        suff[a[i]]--;
        if(a[i] % k == 0){
            ans += preff[a[i] / k] * suff[a[i] * k];
        }
    }
    cout << ans;
    return 0;
}
