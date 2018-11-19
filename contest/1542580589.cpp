#import <iostream>
#import <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s,s1;
    cin >> s;
    int n;
    cin >> n;
    bool flag1 = false, flag2 = false;
    for (int i = 0; i < n; ++i) {
        cin >> s1;
        if (s1[0] == s[0] && s1[1] == s[1]) {
            cout << "YES";
            return 0;
        }
        if (s1[0] == s[1])
            flag1 = true;
        if (s1[1] == s[0])
            flag2 = true;
    }
    if (flag1 && flag2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
