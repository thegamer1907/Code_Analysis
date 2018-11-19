#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pas;
    cin >> pas;
    int n;
    cin >> n;
    //string gar;
    //getline(cin, gar);
    bool ok1 = false, ok2 = false;
    for(int i = 0; i < n; i++){

        string tmp;
        cin >> tmp;
        if(pas == tmp)  ok1 = ok2 = true;
        if(pas[0] == tmp[1]) ok1 = true;
        if(pas[1] == tmp[0]) ok2 = true;

    }
    if(ok1 && ok2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    return 0;
}
