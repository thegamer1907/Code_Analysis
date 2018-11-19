#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define D(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end());
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
const ll infll = powl(2, 62)-1;
const ld pi = 4.0*atanl(1.0);
const ll mod = powl(10, 9) + 7;

int32_t main() {//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<pair<string, string> > arr(n);
    vector<set<string> > tempRow(11);
    vector<vector<set<string> > > table(n, tempRow);//[index][size]
    int index = 0;
    for(pair<string, string>  &p : arr) {
        string s;
        cin >> s;
        for(int size = 1; size <= 10; ++size) {
            for(int i = 0; i <= (int)s.size()-size; ++i) {
                table[index][size].insert(s.substr(i,size));
            }
        }
        if(s.size() < 10) {
            p = mp(s,s);
        } else {
            p = mp(s.substr(0,10), s.substr(s.size()-10));
        }
        index++;
    }
    int k;
    cin >> k;
    while(k--) {
        int a, b;
        cin >> a >> b;
        a--,b--;
        table.pb(tempRow);
        for(int size = 1; size <= 10; ++size) {
            table[index][size] = table[a][size];
            for(auto element : table[b][size]) {
                table[index][size].insert(element);
            }
        }
        pair<string, string> before = arr[a], after = arr[b];
        string middle = before.second + after.first;
        for(int size = 1; size <= 10; ++size) {
            for(int i = 0; i <= (int)middle.size()-size; ++i) {
                table[index][size].insert(middle.substr(i,size));
            }
        }
        pair<string, string> newPair;
        if(before.first.size() < 10 && after.first.size() < 10) {
            if(middle.size() < 10) {
                newPair = mp(middle,middle);
            } else {
                newPair = mp(middle.substr(0,10), middle.substr(middle.size()-10));
            }
        } else if(before.first.size() < 10) {
            string newFirst = before.first + after.first;
            newFirst = newFirst.substr(0,10);
            newPair = mp(newFirst, after.second);
        } else if(after.first.size() < 10) {
            string newSecond = before.second + after.first;
            newSecond = newSecond.substr(newSecond.size()-10);
            newPair = mp(before.first, newSecond);
        } else {
            newPair = mp(before.first, after.second);
        }
        arr.pb(newPair);
        int ans = 10;
        while(ans > 0 && table[index][ans].size() < (int)pow(2,ans)) ans--;
        cout << ans << '\n';
        index++;
    }
    return 0;
}
























