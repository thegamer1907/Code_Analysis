#include <bits/stdc++.h>
#define ll long long

using namespace std;

string a;
int n;

int main()
{
 bool end(0), begin(0);
 cin >> a >> n;
 while (n--)
 {
  string x;
  cin >> x;
  if (x == a) return cout << "YES", 0;
  if (x[0] == a[1]) end = true;
  if (x[1] == a[0]) begin = true;
 }
 cout << ((begin && end) ? "YES" : "NO");
}


