#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    string str;
    int a, b;
    cin >> a >> b >> str;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a - 1; j++) {
            if (str[j] == 'B' && str[j] != str[j + 1]) {
                swap(str[j], str[j + 1]);
                j++;
            }
        }
    }
    cout << str;
}
