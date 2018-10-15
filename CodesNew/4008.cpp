#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

long long warrs[200'002] = {0};

int main() {
  int nWarrs, minutes;
  cin >> nWarrs >> minutes;
  for (int i = 1; i <= nWarrs; i++) {
    long long tmp;
    cin >> tmp;
    warrs[i] = warrs[i - 1] + tmp; // Accumulative strength
  }

  long long acc = 0;
  int pos = 1;
  for (int i = 0; i < minutes; i++) {
    long long arrows;
    cin >> arrows;

    arrows += warrs[pos - 1] + acc;
    long long *ptr = lower_bound(warrs + pos, warrs + nWarrs + 1, arrows);

  //cout << "pos: " << pos << ": ";
    acc = 0;
    pos = distance(warrs, ptr);
    if (arrows >= *ptr) { // Dies
      if (pos >= nWarrs) { // The last one dies.
        pos = 1;
        cout << nWarrs << endl;
      } else {
        cout << nWarrs - pos << endl;
        pos++;
      }
    } else {
      //  cout << "pp: " << ptr - warrs << ": " ;
        cout << nWarrs - pos + 1<< endl;
        acc = arrows - warrs[pos - 1];
        pos = ptr - warrs;
    }

  }
}