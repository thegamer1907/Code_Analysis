#include <iostream>
#include <string>

using namespace std;

bool first['z' + 5];
bool second['z' + 5];

int main()
{
    int n;
    string pass;
    cin >> pass;
    cin >> n;
    string word;
    for(int i = 0; i < n; ++i)
    {
        cin >> word;
        if(word == pass)
        {
            cout << "YES";
            return 0;
        }
        first[word[0]] = true;
        second[word[1]] = true;
    }
    if(second[pass[0]] && first[pass[1]])
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
