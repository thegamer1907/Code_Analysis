#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pl;
    cin >> pl;
    int i = 0, p = 1;
    char curr = '2';
    while(p < 7 && i < pl.length())
    {
        if(curr == pl[i])
            p++;
        else
        {
            curr = pl[i];
            p = 1;
        }
        i++;
    }
    if(p == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}