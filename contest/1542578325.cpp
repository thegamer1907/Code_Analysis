#include <bits/stdc++.h>
#define PI acos(-1.0)
#define mem(a,b) memset((a),b,sizeof(a))
#define TS printf("!!!\n")
#define pb push_back
//std::ios::sync_with_stdio(false);
using namespace std;
//priority_queue<int,vector<int>,greater<int>> que;
const double EPS = 1.0e-8;
typedef pair<int, int> pairint;
typedef long long ll;
typedef unsigned long long ull;
const int  maxn = 1e5 + 100;
const int  maxm = 300;
//next_permutation
//priority_queue<int, vector<int>, greater<int>> que;
int n, k, a[100005][10], type[20], pop = 0;
vector<int> tot;
map<int, int> mp;
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            cin >> a[i][j];
        }
    }
    if(k == 1) {
        tot.push_back(3);
        tot.push_back(2);
    }else if(k == 2) {
        tot.push_back(33);
        tot.push_back(32);
        tot.push_back(23);
        tot.push_back(22);
    }else if(k == 3) {
        tot.push_back(333);
        tot.push_back(332);
        tot.push_back(323);
        tot.push_back(233);
        tot.push_back(223);
        tot.push_back(232);
        tot.push_back(322);
        tot.push_back(222);
    }else if(k == 4) {
        tot.push_back(2222);
        tot.push_back(2223);
        tot.push_back(2232);
        tot.push_back(2322);
        tot.push_back(3222);
        tot.push_back(2233);
        tot.push_back(2332);
        tot.push_back(3322);
        tot.push_back(2323);
        tot.push_back(3232);
        tot.push_back(3223);
        tot.push_back(3332);
        tot.push_back(3323);
        tot.push_back(3233);
        tot.push_back(2333);
        tot.push_back(3333);
    }
    /*for(int j = 2; j <= k; ++j) {
        tot *= 10; tot += 3;
    }*/
    for(int i = 1; i <= n; ++i) {
        int num = 0;
        for(int j = 1; j <= k; ++j) {
            num = num * 10;
            num += a[i][j] + 1;
        }
        //cout << num << endl;
        mp[num] ++;
    }
    for(int i = 1; i <= n; ++i) {
        int num = 0;
        for(int j = 1; j <= k; ++j) {
            num = num * 10;
            num += a[i][j] + 1;
        }
        for(int j = 0; j < tot.size(); ++j) {
            if(mp[tot[j] - num]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;

}
