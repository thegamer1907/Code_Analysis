/*
  Sohrab Roohi
*/

#include <bits/stdc++.h>

using namespace std;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/*
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> counts;
    VI a;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
        counts[ai]++;
    }
    int dp[100001] = {};
    int toInsert = counts.size();
    dp[1] = toInsert;
    for(int i = 1; i <= a.size(); i++) {
        counts[a[i-1]]--;
        if(counts[a[i-1]] == 0) {
            toInsert--;
        }
        dp[i+1] = toInsert;
    }
    for(int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << dp[l] << endl;
    }

    return 0;
}