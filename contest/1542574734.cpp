#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool solve(vector<string>& arr, string& str) {
  int i;
  char a, b;
  bool aa, bb;

  a = str[0];
  b = str[1];

  for (i = 0; i < arr.size(); i++) {
    if (arr[i][0] == a && arr[i][1] == b) return true; 
  }

  for (i = 0; i < arr.size(); i++) {
    if (arr[i][0] == b && arr[i][1] == a) return true; 
  }

  aa = false;
  bb = false;
  for (i = 0; i < arr.size(); i++) {
    if (arr[i][1] == a) aa = true;
    if (arr[i][0] == b) bb = true;
    if (aa && bb) return true; 
  }

  return false;
}

int main(int argc, char* argv[]) {
  vector<string> arr;
  string str;
  int n, i;

  cin >> str;
  cin >> n;
  arr.assign(n, "");
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (solve(arr, str) == true) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
