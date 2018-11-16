#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[n], width = n;
    for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > h)
                width ++;
        }
    cout << width;
    return 0;
}
