#include <bits/stdc++.h>

typedef std::pair<int, int> ii;
#define int int64_t

const int kInfty = 1e18;
const double kEps = 1e-7;

int32_t main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
//   freopen("task.inp", "r", stdin);

  bool first_letter[27], second_letter[27];
  memset(first_letter, false, sizeof(first_letter));
  memset(second_letter, false, sizeof(second_letter));

  std::string word; std::cin >> word;
  std::string attempt[100 + 7];
  int n; std::cin >> n;
  for (int i = 1; i <= n; ++i) { 
  	std::cin >> attempt[i];
  	if (attempt[i] == word) {
  		std::cout << "YES";
  		return 0;
  	}
  	first_letter[attempt[i][1] - 'a'] = true;
  	second_letter[attempt[i][0] - 'a'] = true;
  }

  if (first_letter[word[0] - 'a'] && second_letter[word[1] - 'a']) std::cout << "YES";
  else std::cout << "NO";
}