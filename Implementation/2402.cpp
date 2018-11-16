#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int minutes = 240 - k;
    int i = 0;
    while(minutes - (i+1) * 5 >= 0)
    {
        minutes -= (i+1)*5;
        i++;
    }
    if(i > n)
    {
        cout << n;
    }
    else
    {
        cout << i;
    }
    return 0;
}
