#include <algorithm>
#include <iostream>
#include <math.h>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <string.h>
#include <cstring>
#include <queue>
#include <iomanip>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <set>
#include <sstream>
#include <cassert>
#include <string>
#include <utility>
#include <stdio.h>
#include <vector>
using namespace std;


#define Coder_404 true


#define REP(i,a,n) for (int i=a;i<n;i++)


#define tests 0


class Solution {
public:
	void solve(std::istream& in, std::ostream& out) {
		set<string> a, b;
		int n, m;
		in >> n >> m;		
		string s;
		REP(i, 0, n) {
			in >> s;
			a.insert(s);			
		}
		REP(i, 0, m) {
			in >> s;
			b.insert(s);
		}
		bool polshar = true;
		while (a.size()*b.size() != 0) {
			if (polshar) {
				bool bor = false;
				for (auto x : a) {
					if (b.count(x)) {
						a.erase(x);
						b.erase(x);
						bor = true;
						break;
					}
				}
				if (!bor) {
					if (a.size() > b.size())	out << "YES"; else out << "NO";
					return;
				}
			}
			else {
					bool bor = false;
					for (auto x : b) {
						if (a.count(x)) {
							b.erase(x);
							a.erase(x);
							bor = true;
							break;
						}
					}
					if (!bor) {
						if (b.size() > a.size()) out << "NO";
						else out << "YES";
						return;
					}
			}
			polshar = !polshar;
		}
		if (polshar&&a.size()>0||!polshar&&b.size()==0) out << "YES"; else out << "NO";
	}

};


void solve(std::istream& in, std::ostream& out)
{
	out << std::setprecision(15);

	int T = 1;
	if (tests) in >> T;
	Solution solution;
	if (Coder_404) while (T--) solution.solve(in, out);
}


#include <fstream>


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    istream& in = cin;


    ostream& out = cout;

    solve(in, out);
    return 0;
}


