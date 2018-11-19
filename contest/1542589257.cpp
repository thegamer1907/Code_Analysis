#include <iostream>
#include <cstring>
using namespace std;
char a[1000][5];
int main()
{
    char ch[5];
    cin >> ch;
    int n;
    cin >> n;
    int ok = 0;
    int l = 0;
    int r = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(strcmp(a[i], ch) == 0)ok = 1;
        if(a[i][0] == ch[1])l = 1;
        if(a[i][1] == ch[0])r = 1;
    }
//    cout << ok << l << ' ' << r  << endl;
    if(ok == 1 || (l == 1 && r == 1))cout << "YES" << endl;
    else cout << "NO" << endl;
}
