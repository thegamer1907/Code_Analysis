#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
    string mk;
    cin >> mk;
    int n;
    cin >> n;
    vector <string> a (n, string());
    bool kt1=false, kt2=false;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
    {
        if (a[i]==mk) {
            cout << "YES";
            return 0;
        }
        if (a[i][0]==mk[1]) kt1=true;
        if (a[i][1]==mk[0]) kt2=true;
    }
    if (kt1&&kt2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
