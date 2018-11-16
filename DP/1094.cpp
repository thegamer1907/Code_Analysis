#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2];
    int ca[n+2];
    ca[0]=0;
    int curr =0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if(a[i]==1)curr++;
        ca[i] = ca[i-1]+a[i];
    }
    int flag= 0;
    int second = 0;
    for (int i = 1; i <=n; ++i) {
        for (int j = i; j <= n; ++j) {
            if(curr<=ca[i-1]+ ( j-i+1 - (ca[j] - ca[i-1]))+ (ca[n]-ca[j])){
                flag = 1;
                second = curr;
                curr = ca[i-1]+ ( j-i+1 - (ca[j] - ca[i-1]))+ (ca[n]-ca[j]);
            }else if(ca[i-1]+ ( j-i+1 - (ca[j] - ca[i-1]))+ (ca[n]-ca[j])>=second) {
                second = ca[i - 1] + (j - i + 1 - (ca[j] - ca[i - 1])) + (ca[n] - ca[j]);
            }
        }
    }
    if(!flag)cout<< second;
    else cout << curr;
    return 0;
}