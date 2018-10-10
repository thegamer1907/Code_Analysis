#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
int n, m; cin >> n >> m;
string sn[1000], sm[1000];
 
for (int i = 0; i < n; ++i)
cin >> sn[i];
 
for (int i = 0; i < m; ++i)
cin >> sm[i];
 
int sim = 0;
for (int i = 0; i < n; ++i)
for (int j = 0; j < m; ++j)
if (sn[i] == sm[j])
++sim;

if (n - sim == 0) {
if (m  - sim > 0)
cout << "NO" << endl;
else {
if (sim % 2 != 0)
cout << "YES" << endl;
else
cout << "NO" << endl;
}
}
else
if (m  - sim == 0)
cout << "YES" << endl;

int h = 0;
if ((n - sim > 0)&&(m - sim > 0)) {
if (sim % 2 == 1)
h = 1;
if (n - sim == m - sim - h)
cout << "NO" << endl;
else {
if (n - sim > m - sim - h)
cout << "YES" << endl;
else
cout << "NO" << endl;
}
}
	
    return 0;
}