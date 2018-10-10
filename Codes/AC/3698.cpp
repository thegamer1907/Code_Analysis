#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<ctime>
#include<cmath>

#include<algorithm>
#include<bitset>
#include<complex>
#include<deque>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<stack>
#include<string>
#include<set>
#include<vector>
using namespace std;

long long m;
long long n[3], p[3], k[3];
bool test(long long now){
    long long cst = 0;
    for (int i = 0; i < 3; i++) {
        if(n[i] < k[i] * now)
            cst += (k[i] * now - n[i]) * p[i];
    }
    return cst <= m;
}
int main(int argc, const char *argv[])
{
    std::vector<long long > arr;
    string str;
    cin >> str;
    for (int i = 0; i < 3; i++) cin >> n[i];
    for (int i = 0; i < 3; i++) cin >> p[i];
    for (int i = 0; i < 3; i++) k[i] = 0;
    cin >> m;
    long long cst = 0;
    for (int i = 0; i < str.length(); i++) {
        if(str[i] == 'B') cst += p[0], k[0]++;
        if(str[i] == 'S') cst += p[1], k[1]++;
        if(str[i] == 'C') cst += p[2], k[2]++;
    }
    long long ans = 0;
    long long L = 0, R = 2e12;
    while(L <= R){
        long long mid = (L+R)/2LL;
        if(test(mid)){
            ans = max(ans, mid);
            L = mid+1LL;
        }else
            R = mid - 1LL;
    }
    cout << ans << endl;
    return 0;
}
