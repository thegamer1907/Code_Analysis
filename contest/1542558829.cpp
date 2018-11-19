#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string input;
    string tries[100];

    int n;

    bool hasFirst = false;
    bool hasLast = false;

    cin >> input >> n;

    for(int i = 0; i < n; i++) {
        cin >> tries[i];
        if(tries[i] == input) {
            hasFirst = true;
            hasLast = true;
        }
    }

    if(n == 1 && input == tries[0])
        cout << "YES";
    else {

        for(int i = 0; i < n; i++) {
            if(tries[i].at(0) == input.at(1)) {
                hasFirst = true;
            }
        }

        for(int i = 0; i < n; i++) {
            if(tries[i].at(1) == input.at(0))
                hasLast = true;
        }

        if(hasFirst && hasLast)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
