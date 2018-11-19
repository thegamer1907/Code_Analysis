#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cassert>
#include <memory.h>
using namespace std;
typedef long long ll;

const int MN = 200;
vector<string> str(MN+5);
vector<int> dp(MN+5);
int N, K;

int solve(const string & s) {
    for(int i=10;i>=1;i--) {
        bool flag = 1;
        for(int j=0;j<(1<<i);j++) {
            string tmp="";
            for(int k=0;k<i;k++) {
                if(j & (1<<k)) tmp += '1';
                else tmp += '0';
            }
            if(s.find(tmp) == s.npos) {
                flag = 0;
                break;
            }
        }
        if(flag) return i;
    }
    return 0;
}

int main () {
    cin >> N;
    for(int i=1;i<=N;i++) {
        cin >> str[i];
        dp[i] = solve(str[i]);
    }
    cin >> K;
    for(int i=N+1;i<=N+K;i++) {
        int a, b;
        cin >> a >> b;
        string A = str[a], B = str[b];
        str[i] = str[a] + str[b];
        
        dp[i] = max({dp[a], dp[b], solve(str[i])});
        cout << dp[i] << endl;
        
        
        if(str[i].size() > 2000) {
            str[i] = str[i].substr(0, 1000)+str[i].substr((int)str[i].size()-1000, 1000);
        }
    }
    
    return 0;
}
