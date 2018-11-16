#include <iostream>
#include <string>
using namespace std;


int main() {
  
  int n;
  cin >> n;

  int k;
  cin >> k;

  int pass = 0;

  int competitors [n];

  for (int i = 0; i < n; ++i){
    cin >> competitors[i];
  }
  
  for (int i = 0; i < n; ++i){
    if(competitors[i] >= competitors[k - 1] && competitors[i] > 0){
      pass ++;
    }
  }

  cout << pass;

	return 0;
}