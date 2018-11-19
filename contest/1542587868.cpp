#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    char pass[3];
    cin >> pass;
    cin >> n;
    char A[n][3];
    for (int i=0;i<n;i++)
        cin >> A[i];
    bool flag1 = false;
    bool flag2 = false;
    bool flag0 = false;

    for (int i=0;i<n;i++)
        if (strcmp(pass,A[i])==0)
            flag0 = true;

    for (int i=0;i<n;i++)
        if (pass[0]==A[i][1])
            flag1 = true;

    for (int i=0;i<n;i++)
        if (pass[1]==A[i][0])
            flag2 = true;

    if (flag0 ||(flag1 && flag2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
