#include <bits/stdc++.h>

using namespace std;
    int amount[3];
    int price[3];
    int needed[3];
long long cost(long long x){
    return max(0LL, x * needed[0] - amount[0]) * price[0] + max(0LL, x * needed[1] - amount[1]) * price[1] + max(0LL, x * needed[2] - amount[2]) * price[2];
}
int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    string str;
    cin >> str;
    for(int i = 0;i < str.size();i++){
        if(str[i] == 'B')needed[0]++;
        if(str[i] == 'S')needed[1]++;
        if(str[i] == 'C')needed[2]++;
    }


    cin >> amount[0] >> amount[1] >> amount[2];

    cin >> price[0] >> price[1] >> price[2];
    long long lo = 0, hi = 1e13;
    long long lim;
    cin >> lim;
    while(lo < hi){
        long long mid = (lo+hi+1)/2;
        long long c = cost(mid);
        if(c > lim){
            hi = mid - 1;
        }else{
            lo = mid;
        }
    }
    cout << (lo+hi)/2;
}
