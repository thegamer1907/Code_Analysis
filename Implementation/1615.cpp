#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = s.find("0000000"), b = s.find("1111111");
    if (a == -1 && b == -1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}