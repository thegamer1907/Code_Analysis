#include <iostream>
using namespace std;
bool isperfect(int x)
{
    int sum = 0;
    while(x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}
int main()
{
    int k;
    cin >> k;
    int i;
    for(i=1; k>0; i++)
        k -= isperfect(i);
    cout << i-1 << "\n";
    return 0;
}
