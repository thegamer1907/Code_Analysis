#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T, class R>
istream &operator>>(istream &in, pair<T, R> &p) {
	in >> p.first >> p.second;
	return in;
}

template<class T>
istream &operator>>(istream &in, vector<T> &v) {
	for (auto &e : v)
		in >> e;
	return in;
}

template<class T>
ostream &operator<<(ostream &out, vector<T> &v) {
	for (auto e : v)
		out << e << ' ';
	return out;
}


int main(){
	int n; cin >> n;
	vector<pair<int, int>> forest(n);
	cin >> forest;

	vector<int> left(n), stay(n), right(n);
	left[0] = 1;

	if (forest[0].first + forest[0].second < forest[1].first)
		right[0] = 1;

	for(auto i = 1; i < n; i++){
		left[i] = max(left[i - 1], stay[i-1]);

		if (forest[i].first - forest[i].second > forest[i - 1].first) {
			left[i] = max(left[i] + 1, stay[i - 1] + 1);

			if (forest[i].first - forest[i].second > forest[i - 1].first + forest[i - 1].second)
				left[i] = max(left[i], right[i - 1] + 1);
		}

		right[i] = max(right[i - 1], left[i-1]);

		if(i < n - 1 && forest[i].first + forest[i].second < forest[i + 1].first){
			right[i] = max(max(left[i - 1], stay[i - 1]) + 1, right[i] + 1);
		}
		else if (i == n - 1) {
			right[i]++;
		}

		stay[i] = max(max(left[i - 1], stay[i - 1]), right[i - 1]);
	}

	cout << max(stay[n - 1], max(left[n - 1], right[n - 1])) << '\n';

	//system("PAUSE");
	return 0;
}