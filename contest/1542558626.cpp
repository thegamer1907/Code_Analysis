#include <algorithm>
#include <iomanip>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>


using namespace std;
// Powered by caide (code generator, tester, and library code inliner)


class Solution {
public:
    void solve(std::istream& in, std::ostream& out) {
		string psw; in >> psw;
		int n; in>>n;
		vector<string> arr(n); int a = 0, b = 0;
		for(int i = 0;i < n;i++) {
			in>>arr[i];
			if (arr[i] == psw) {
				out << "YES";
				return;
			}
			if (arr[i][0] == psw[1]) a++;
			if (arr[i][1] == psw[0]) b++;
		}

		out << ((a>0&&b>0) ? "YES": "NO");
    }
};

void solve(std::istream& in, std::ostream& out)
{
    out << std::setprecision(12);
    Solution solution;
    solution.solve(in, out);
}


#include <fstream>
#include <iostream>


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    istream& in = cin;


    ostream& out = cout;

    solve(in, out);
    return 0;
}


