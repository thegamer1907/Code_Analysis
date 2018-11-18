#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define inf 0x7FFFFFFF
typedef long long ll;
typedef pair<int, int> P;
const int maxn = 1e5 + 5;
const ll INF = 1e18;

string s[205];
set<int>st[205];
void print_set(set<int> st)
{
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> s[i];
        for(int j=0; j<s[i].size(); j++) {
            int tmp = 0;
            int len = s[i].size();
            for(int k=0; k<min(11, len-j); k++) {
                tmp = (tmp<<1) + s[i][j+k] - '0';
                st[i].insert((1<<(k+1))+tmp);
            }
        }
    }
    int m;
    cin >>  m;
    for(int i=1; i<=m; i++) {
        int a, b;
        cin >> a >> b;
        s[n+i] = s[a] + s[b];
        st[n+i].insert(st[a].begin(), st[a].end());
        st[n+i].insert(st[b].begin(), st[b].end());
        int left = s[a].size() - 1 - 11;
        left = max(0, left);
        for(int j=left; j<=s[a].size(); j++) {
            int tmp = 0;
            int len = s[n+i].size();
            for(int k=0; k<min(11, len-j); k++) {
                tmp = (tmp<<1) + s[n+i][j+k] - '0';
                st[n+i].insert((1<<(k+1))+tmp);
            }
        }
        //print_set(st[n+i]);
        for(int j=1; j<=min(11, int(s[n+i].size())); j++) {
            bool flag = false;
            for(int k=0; k<(1<<j); k++) {
                if(st[n+i].find((1<<j)+k)==st[n+i].end()) {
                    cout << j-1 << endl;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(s[n+i].size()>50) {
            string tmp = s[n+i].substr(0, 20) + s[n+i].substr(s[n+i].size()-20,20);
            s[n+i] = tmp;
        }
    }
}