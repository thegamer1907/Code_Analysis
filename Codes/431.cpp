#include <iostream>
#include <iomanip>
using namespace std;

int d[10][10], v[10];

int s(int a) {
    int sum(0);
    while (a > 0) {
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int a(19), k(0);
    while (k < n) {
        if (s(a) == 10) {
            ++k;
        }
        ++a;
    }
    cout << a - 1;
    return 0;
}
