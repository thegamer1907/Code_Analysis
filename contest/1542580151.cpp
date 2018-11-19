#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <set>
#include <sstream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    string pass;
    cin>>pass;
    char a=' ',b=' ';

    int n;
    int j = 0;
    string arr[105];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];

    for (int i=0;i<n;i++)
    {
        if (arr[i] == pass)
        {
            cout<<"YES";
            return 0;
        }
        string x = arr[i];
        if (x[1] == pass[0] && x[0] == pass[1])
        {
            cout<<"YES";
            return 0;
        }
        else if (x[1] == pass[0] && x[1] != a)
            {
                a = x[1];
                j++;
            }
        else if ( x[0] == pass[1] && x[0] != b )
        {
            b = x[0];
            j++;
        }
        if (j==2)
            break;

    }

    if (j==2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;


}
