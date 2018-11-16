#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char q[n];
    for(int i = 0; i < n; i++)
        cin >> q[i];
    for(int i = 0; i < t; i++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(q[i] == 'B' && q[i + 1] == 'G')
            {
                q[i] = 'G';
                q[i + 1] = 'B';
                i++;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << q[i];
    return 0;
}
