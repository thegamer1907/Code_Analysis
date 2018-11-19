#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

const long long INF = 2e9;
const double eps = 0.000000001;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    string a[100];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(a[0] == pass)
    {
        cout << "YES";
        return 0;
    }
    bool frst = false, scnd =false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == pass)// || (a[i][0] = pass[1] && a[i][1] == pass[0]))
        {
            cout << "YES";
            return 0;
        }
        else {
                if(a[i][1] == pass[0]  && !frst)
            {
            frst = true;
            }
            if(a[i][0] == pass[1] && !scnd)
            scnd = true;
        }
        if(frst && scnd)
        {
            cout << "YES";
            return 0;
        }

    }
    cout << "NO";
    return 0;
}
