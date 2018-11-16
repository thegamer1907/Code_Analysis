#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, num1, num2, mx = -1;
    num1 = num2 = 0;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a == 1)
        {
            num1++;
            if(num2 > 0) num2--;
        }
        else
        {
            num2++;
            if(num2 > mx) mx = num2;
        }
    }
    cout << num1 + mx;
    return 0;
}