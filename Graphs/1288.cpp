#include <iostream>

using namespace std;



int main()
{
    int n , k , x , s = 1;
    cin >> n >> k;
    for(int i = 1 ; i < n ; i++)
    {
        cin >> x;
        if(s == i)
            s = (i + x);
        if(s == k)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
