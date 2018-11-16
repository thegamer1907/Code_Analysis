#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << n - distance(s.begin(), unique(s.begin(), s.end()));
}
