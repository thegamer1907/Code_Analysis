
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;


int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string password;
    getline(cin, password);

    int num;
    cin >> num;

    string a;
    getline(cin, a);

    bool first = false;
    bool second = false;

    for(int i=0; i<num; ++i)
    {
        string word;
        getline(cin, word);
        if(word[0] == password[0] && word[1] == password[1])
        {
            first = true;
            second = true;
            break;
        }

        if(word[0] == password[1] && word[1] == password[0])
        {
            first = true;
            second = true;
            break;
        }

        if(word[0] == password[1])
            second = true;

        if(word[1] == password[0])
            first = true;
    }

    if(first && second)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

