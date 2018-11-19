#include <bits/stdc++.h>
using namespace std;
int main()
{
    char one, two;
    cin >> one >> two;
    int n, flag1=0, flag2=0;
    cin >> n;
    char str[n+10];

    for(int i=0;i<n;i++)
    {
        cin >> str;
        if(str[0] == one && str[1] == two)
            {cout << "YES";
            return 0;}
        if(str[0] == two)
            flag1=1;
        if(str[1] == one)
            flag2=1;
    }
    if(flag1==1 && flag2==1)
        cout << "YES";
    else cout << "NO";
}
