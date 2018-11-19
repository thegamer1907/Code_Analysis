#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string str;
string a[105];
int n;
int main() {
    while (cin >> str >> n) {
        bool flag = 0;
        bool flag1 = 0;
        bool flag2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == str)
                flag = 1;
            if (a[i][0] == str[1])
                flag1 = 1;
            if (a[i][1] == str[0])
                flag2 = 1;
        }
        if (flag == 1 || flag1 == 1 && flag2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
