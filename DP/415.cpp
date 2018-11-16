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
    
    VI boys, girls;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        boys.push_back(v);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int v;
        cin >> v;
        girls.push_back(v);
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int groups = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < girls.size(); j++) {
            int diff = abs(boys[i] - girls[j]);
            if(diff <= 1) {
                groups++;
                girls.erase(girls.begin() + j);
                break;
            }
        }
    }
    cout << groups;
    return 0;
}