#include <iostream>
#include <math.h>
using namespace std;

int r(int n, int m, int c)
{
    if (n>=m)
        return cout << c+n-m,0;
    if (m%2==1)
        r(n,m+1,c+1);
    else
        r(n,m/2,c+1);
}

int main()
{
    int n,m;
    cin >>n >> m;

    r(n,m,0);
    return 0;
}
