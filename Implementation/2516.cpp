#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    if(str.find('H') != string::npos || str.find('Q') != string::npos || str.find('9') != string::npos)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
