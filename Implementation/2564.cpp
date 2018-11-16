#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp > h)
            count += 2;
        else
            count++;
    }
    cout << count;
    return 0;
}
