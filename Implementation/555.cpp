#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct g
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

int main() {
  int n, k; cin >> n >> k;
  vector<int> scores;

  for (int i = 0; i < n; i++) {
    int s; cin >> s;
    if (s > 0)
      scores.push_back(s);
  }

  sort(scores.begin(), scores.end(), g());

  if (k > scores.size())
    cout << scores.size();
  else {
    int cut = scores[k - 1];
    int total = k;
    while (total < scores.size() && scores[total] == cut)
      total++; 
    cout << total << endl;
  }

  return 0;
}