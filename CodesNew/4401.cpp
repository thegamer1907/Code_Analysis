#include<bits/stdc++.h>
#define LL long long
using namespace std;


const int maxn = 5e5 + 10;
string s[maxn], ans[maxn];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(int i = 0; i < n; i ++)
        cin >> s[i], ans[i] = "";

    ans[n - 1] = s[n - 1];
    for(int i = n - 1; i >= 1; i --) {
        string & cur = ans[i], & pre = s[i - 1];
        int j = 0, k = 0;
        while(j < pre.size() && k < cur.size() && pre[j] == cur[k])
            j ++, k ++;
        if(j == pre.size()) {
            ans[i - 1] = pre;
        } else if(k == cur.size()) {
            ans[i - 1] = cur;
        } else {
            if(pre[j] > cur[k]) {
                ans[i - 1] = pre.substr(0, j);
            } else {
                ans[i - 1] = pre;
            }
        }
    }

    for(int i = 0; i < n; i ++)
        cout << ans[i] << endl;
    return 0;
}
