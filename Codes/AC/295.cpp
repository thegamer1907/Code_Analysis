#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000000 + 10] = {};
    for(int i = 0, x = 1, w; i < n; i++, x += w) {
        cin >> w;
        for(int j = x; j < x + w; j++)
            a[j] = i + 1;
    }

    int m;
    cin >> m;
    while(m--) {
        int x;
        cin >> x;
        cout << a[x] << endl;
    }

    return 0;
}
