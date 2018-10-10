#include<bits/stdc++.h>
using namespace std;

int k;

bool ok(int x)
{
    int sum = 0;
    while(x)
    {
        sum += x%10;
        x /= 10;
    }
    return sum == 10;
}

int main()
{
    ios::sync_with_stdio(0);
    int num = 1;
    cin >> k;
    while(1)
    {
        if(ok(num)) k--;
        if(k == 0)
        {
            cout << num << endl;
            return 0;
        }
        num++;
    }
    return 0;
}
