#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll maxi = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){
            ll count = 0;
            for(int k = 0;k < i;k++){
                if(a[k] == 1){
                    count++;
                }
            }
            for(int k = i;k <= j;k++){
                if(a[k] == 0){
                    count++;
                }
            }
            for(int k = j + 1;k < n;k++){
                if(a[k] == 1){
                    count++;
                }
            }
            maxi = max(maxi,count);
        }
    }
    cout << maxi << '\n';
    return 0;    
}
