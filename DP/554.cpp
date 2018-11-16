#include <iostream>

using namespace std;
const int MAXN = 1000 * 100 + 10;
int arr[MAXN];
int main()
{
    string s;
    cin >> s;
    int n = (int)s.size();
    arr[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            arr[i] = arr[i - 1] + 1;
        }
        else 
        {
            arr[i] = arr[i - 1];
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[b - 1] - arr[a - 1] << endl;
    }
    return 0;
}