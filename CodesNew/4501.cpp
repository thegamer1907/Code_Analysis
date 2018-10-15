#include <iostream>
//#include <string>
#include <cstdlib>
#include <cmath> // pow(10, 3)
//#include <stdint.h>
//#include <iomanip> // fixed setprecision for cout
#include <vector>
#include <algorithm> // vector.find

using std::vector;
using std::swap;
//using namespace std;

void partition2(vector<int> &a, int l, int r, int &m1, int &m2) {
  int x = a[l];
  m1 = l;
  m2 = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] == x) {
      m2++;
      swap(a[i], a[m2]);
    }
    else if (a[i] < x) {
      m2++;
      swap(a[i], a[m2]);
      swap(a[m1], a[m2]);
      m1++;
    }
  }
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  int m1, m2;
  partition2(a, l, r, m1, m2);

  randomized_quick_sort(a, l, m1 - 1);
  randomized_quick_sort(a, m2 + 1, r);
}

int main(){
    int n, n2, q, m, k, p;
    int i, j, l;
    int x, y, xl, xr, xn;
    //int a, b, c, ab;
    int res = 0, tmp, resw = 10, resb = 10;
    std::cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        std::cin >> a[i];
    //std::string a, b;
    randomized_quick_sort(a, 0, n - 1);
    n2 = (n + 1) / 2;
    res = n;
    for (i = 0, j = n2; i < n2, j < n; ){
        while ((a[j] < a[i] * 2) && (j < n)){
            j++;
        }
        if (j < n){
            i++;
            j++;
            res--;
        }
    }
    std::cout << res;
    return 0;
}