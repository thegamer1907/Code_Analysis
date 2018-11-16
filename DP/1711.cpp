#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

string s;


bool check1()
{
    bool ok1 = 0 , ok2 = 0;
    string tmp = s;

    for(int i = 1 ; tmp[i] ; i ++)
    {
        if(tmp[i] == 'B' && (tmp[i-1] == 'A'))
        {
            tmp[i] = '?';
            tmp[i-1] = '?';
            ok1 = 1;
            break;
        }
    }

    for(int i = 1 ; tmp[i] ; i ++)
    {
        if(tmp[i] == 'A' && (tmp[i-1] == 'B'))
        {
            tmp[i] = '?';
            tmp[i-1] = '?';
            ok2 = 1;
            break;
        }
    }

    return ok1&ok2;
}

bool check2()
{
    bool ok1 = 0 , ok2 = 0;
    string tmp = s;

    for(int i = 1 ; tmp[i] ; i ++)
    {
        if(tmp[i] == 'A' && (tmp[i-1] == 'B'))
        {
            tmp[i] = '?';
            tmp[i-1] = '?';
            ok1 = 1;
            break;
        }
    }

    for(int i = 1 ; tmp[i] ; i ++)
    {
        if(tmp[i] == 'B' && (tmp[i-1] == 'A'))
        {
            tmp[i] = '?';
            tmp[i-1] = '?';
            ok2 = 1;
            break;
        }
    }

    return ok1&ok2;
}

main()
{

    cin >> s;

    if(check1() || check2())printf("YES\n");
    else printf("NO\n");
}
