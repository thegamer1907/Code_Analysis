#include <iostream>
#include <algorithm>

using namespace std;

int n , k, a, arr[105], var_max;
int main()
{
  scanf("%d", &n);
  scanf("%d", &k);
  int b;a = k;
  for(int i = 0 ; i < n; ++i) scanf("%d", &arr[i]);
  sort(arr, arr + n);
  var_max = arr[n -1];
  for(int i = 0; i < n - 1  && k > 0;  ++i)
  {
    b = arr[n - 1] - arr[i];
    arr[i] += b;
    k -= b;
  }
  sort(arr, arr + n);
  cout << arr[n - 1] + (k/n + 1*(k%n > 0))*(k>0)<< ' ' << var_max +  a;
  return 0;
}