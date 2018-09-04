#include <iostream>

using namespace std;

int sum(int x) {
  int answer = 0;
  while (x > 0) {
    answer += x % 10;
    x /= 10;
  }
  return answer;
}

int main() {
  int K;
  cin >> K;

  int current = 18;
  while (K > 0) {
    ++current;
    if (sum(current) == 10)
      --K;
  }

  cout << current << endl;

  return 0;
}