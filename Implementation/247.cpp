#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int k = 0;
    a--;
    b--;
    while (a != b) {
        a /= 2;
        b /= 2;
        k++;
    }
    if ((1 << k) == n) {
        cout << "Final!";
    }
    else {
        cout << k;
    }
    return 0;
}
