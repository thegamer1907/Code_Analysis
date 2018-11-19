/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author PallMall
 */

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class TaskA {
public:
	void solve(std::istream& in, std::ostream& out) {
        string pass;
        in >> pass;
        int n;
        in >> n;
        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            in >> words[i];
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (words[i][1] == pass[0] && words[j][0] == pass[1]) {
                    out << "YES";
                    return;
                }
                if (words[i][0] == pass[0] && words[i][1] == pass[1]) {
                    out << "YES";
                    return;
                }
                if (words[i][1] == pass[0] && words[i][0] == pass[1]) {
                    out << "YES";
                    return;
                }
            }
        }
        out << "NO";
	}
};


int main() {
    ios_base::sync_with_stdio(0); cin.tie(false); cout.tie(false);
	TaskA solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
