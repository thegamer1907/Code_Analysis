#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int x = n, fnl = 0, round = 0;
    while(x != 1)
    {
        fnl++;
        x /= 2;
    }

    while(a != b)
    {
        round++;
        a = (a+1)/2, b = (b+1)/2;
    }
    if(round == fnl) cout << "Final!" << endl;
    else cout << round << endl;

    return 0;
}
///doesn't accepted
