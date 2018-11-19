#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <set>
#include <map>

using namespace std;

const int MAXN = 2e5 + 1;

int N;

std::string S;

std::string s[105];

int main(){

	std::cin >> S >> N;
	
	bool ok = false;
	
	for (int i = 1; i <= N; i++) {
		std::cin >> s[i];
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
				std::string full = s[i] + s[j];
				int faf = full.find(S);
				std::string pap = S;
				reverse(pap.begin(), pap.end());
				
				std::string lal, xax, temp = s[i], temp1 = s[j];
				
				reverse(temp.begin(), temp.end());
				reverse(temp1.begin(), temp1.end());
				
				if (faf > -1 || s[i] == S || s[j] == S || temp == pap || temp1 == pap) {
					std::cout << "YES";
					return 0;
				}
		}
	}

	std::cout << "NO";
	
	return 0;
}