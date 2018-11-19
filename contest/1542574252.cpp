#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <chrono>

using namespace std;

bool solve() {
	int problemCount, teamCount;
	cin >> problemCount >> teamCount;
	
	vector<tuple<int, int>> problems;
	problems.reserve(problemCount);

	for(int i = 0 ; i < problemCount ; ++i) {
		int bits = 0;
		int knownCount = 0;
		for(int j = 0 ; j < teamCount ; ++j) {
			int bit;
			cin >> bit;
			knownCount += bit;
			bits = bits << 1 | bit;
		}

		if(knownCount == 0) {
			return true;
		}

		problems.push_back(make_tuple(bits, knownCount));
	}

	sort(problems.begin(), problems.end(), [](tuple<int, int> const& a, tuple<int, int> const& b) { return get<0>(a) < get<0>(b); });
	problems.erase(unique(problems.begin(), problems.end()), problems.end());

	for(int index = 0 ; index < problems.size() ; ++index) {
		int bits = get<0>(problems[index]);
		int knownCount = get<1>(problems[index]);
		for(int compareIndex = index + 1 ; compareIndex < problems.size() ; ++compareIndex) {
			int compareBits = get<0>(problems[compareIndex]);
			int compareKnownCount = get<1>(problems[compareIndex]);
			if((bits & compareBits) == 0) {
				return true;
			}
		}
	}

	return false;
}

int main(int argc, char **argv) {
	//auto started = std::chrono::high_resolution_clock::now();
	if(solve()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	//auto done = std::chrono::high_resolution_clock::now();
	//std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(done-started).count() << " ms";

	return 0;
}