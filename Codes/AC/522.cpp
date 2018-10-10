#include<bits/stdc++.h>

using namespace std;
int n, i, k;
int f(int t)
{
    int s;
    s = 0;
    while(t >= 1)
    {
        s += (t % 10);
        t /= 10;
    }
    return s;
}

int main()
{
    cin >> n;
    k = 19;
    i = 1;
    while(i != n)
    {
        k += 9;
        if(f(k) == 10)
            i++;
    }
    cout << k;
}
