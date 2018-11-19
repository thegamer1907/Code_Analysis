#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;
    cin >> password;

    int n;
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int first = -1;
    int second = -1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i][0] == password[0] && arr[i][1] == password[1])
            return cout << "YES", 0;
        if (arr[i][1] == password[0])
            first = i;
        if (arr[i][0] == password[1])
            second = i;
        if (first != -1 && second != -1)
            return cout << "YES", 0;
    }
    return cout << "NO", 0;
}
