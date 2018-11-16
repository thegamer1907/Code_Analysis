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
    
    string s;
    cin >> s;
    vector<int> abIndex, baIndex;
    if(s.find("AB") != string::npos && s.find("BA") != string::npos) {
        for(int i = 0; i < s.length(); i++) {
            string cur = "";
            cur += s[i];
            cur += s[i+1];
            if(cur == "AB") {
                abIndex.push_back(i);
            }
            else if(cur == "BA") {
                baIndex.push_back(i);
            }
        }
        for(int i = 0; i < abIndex.size(); i++) {
            for(int j = 0; j < baIndex.size(); j++) {
               if(abs(abIndex[i] - baIndex[j]) >= 2) {
                   cout << "YES";
                   return 0;
               }
            }
        }
    }
    cout << "NO";
    return 0;
}