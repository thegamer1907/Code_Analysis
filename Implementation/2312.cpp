#include <bits/stdc++.h>
#define ll long long
#define vint vector <int>
using namespace std;
int main () {
int n, prev, k = 0; cin >> n;
string row; cin >> row;
for (int i = 0; i < n; i++) {
    if (row[i] == prev) k++;
    prev = row[i];
}
cout << k;
return 0;
}
