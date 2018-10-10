#include <iostream>
using namespace std;

int sumd(int n)
{
    int r = 0;
    while (n)
    {
        r += n % 10;
        n /= 10;
    }
    return(r);
}

int main()
{
    int k, c = 19;;
    cin >> k;
    while (k)
    {
        if (sumd(c) == 10) k--;
        c++;
    }
    cout << c - 1;
    return(0);
}