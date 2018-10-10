#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    // input1
	int n, l, d;
    cin >> n >> l;
    // input2
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //ordena
	sort(a, a + n);
	
    d = max(a[0], l - a[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++)
        d = max(d, a[i + 1] - a[i]);    

    // cantidad decimales
	cout.precision(10);
    cout << fixed << d / 2.0 << endl;
    return 0;
}
// 1538608658514
