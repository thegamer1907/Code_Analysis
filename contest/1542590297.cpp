#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, temp;
    char first, second, tfirst, tsecond;
    bool firstmatch = false, secondmatch = false;
    int i, n;

    cin >> str;
    first = str[0];
    second = str[1];

    cin >> n;

    for (i = 0; i < n; i++){
        cin >> temp;
        tfirst = temp[0];
        tsecond = temp[1];
        if (!temp.compare(str)) {cout << "YES"; return 0;}
        if (tsecond == first) firstmatch = true;
        if (tfirst == second) secondmatch = true;
    }
    if (firstmatch && secondmatch) cout << "YES";
    else cout << "NO";
    return 0;

}
