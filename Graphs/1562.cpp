#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int v[30001] = {0};
    for(int i = 1; i < n; i++)
        cin >> v[i];
    bool ban = true;
    int j = 1;
    while(ban && j <= t)
    {
        if(j == t)
            ban = false;
        else
        {
            j = j + v[j];
        }
    }
    //cout << j << endl;
    if(!ban)
        cout << "YES";
    else cout << "NO";
    return 0;
}
