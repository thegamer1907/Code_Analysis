#include <iostream>

using namespace std;

string s;
string a[150];

int main()
{
    cin >> s;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == s){
            cout << "YES";
            return 0;
        }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
    if(a[i][1] == s[0] && a[j][0] == s[1]){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
