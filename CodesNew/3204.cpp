#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int &x: A)
    cin >> x;

  if (K == 0 && count(A.begin(), A.end(), 1) == 0){
    cout << "0\n";

    for (int x: A)
      cout << x << " ";
    cout << endl;

    return 0;
  }

  int k = K;
  int j = 0;

  int best = -1;
  int start = -1;

  for (int i = 0; i < N; i++){
    while (j < N && (A[j] == 1 || k > 0)){
      if (A[j] == 0)
        k--;
      j++;
    }

    if (best < j - i){
      best = j - i;
      start = i;
    }

    if (A[i] == 0)
      k++;
  }

  cout << best << "\n";

  for (int i = 0; i < N; i++){
    if (i < start || i >= start + best)
      cout << A[i] << " ";
    else
      cout << "1 ";
  }

  cout << endl;

  return 0;
}
