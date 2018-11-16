#include <iostream>

using namespace std;

int main()
{
    int n, k;  cin >> n >> k;
    int s[n];
    s[0] = 5;
    for(int i = 1; i < n; i++)
    {
        s[i] = s[i-1] + (i+1)*5;
    }

    int i = 0;
    while(i < n && s[i] + k <= 240)
        i++;

    cout << i;

    return 0;
}
