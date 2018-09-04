#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

typedef pair<long long,long long> ii;

const long long mod = 1e9 + 7;

long long n,a[100005],min1=LLONG_MAX,amount;

int main(){
    cin.tie(0),ios::sync_with_stdio(0);
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        min1 = min(min1,a[i]);
    }
    if(min1>n){
        long long times = min1 / n;
        amount+=times*n;
        for(int i = 1;i <= n;i++){
            a[i]-=times*n;
        }
    }
    long long sum = 0;
    while(1){
        for(int i = 1;i <= n;i++){
            if(a[i]-sum<=0){
                cout<<i;
                return 0;
            }
            sum++;
        }
    }
}