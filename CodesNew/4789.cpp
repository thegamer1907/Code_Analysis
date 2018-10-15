#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> A(N);
  for (int &x: A)
    cin >> x;

  sort(A.begin(), A.end());

  int answer = N;
  int j = N / 2;

  for (int i = 0; i < N / 2; i++){
    while (j < N && 2 * A[i] > A[j]){
      j++;
    }

    if (j < N){
      assert(2 * A[i] <= A[j]);
      answer--;
      j++;
    }
  }

  cout << answer << endl;

  return 0;
}
