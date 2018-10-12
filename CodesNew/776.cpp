#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n , m ;
    cin >> n >> m ;

    map<string , bool > mp1;
    map<string , bool > mp2;
    string s ;

    for(int i = 0 ; i <n ; i ++)
    {
        cin >> s;

        mp1[s] = 1;
    }

    int counter = 0 ;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> s;

        if(!mp1.count(s))
        {
            mp2[s] = 1;
        }
        else
        {
            counter++;
            mp2[s] = 1;
        }
    }


    int f = mp1.size();
    int se = mp2.size();

    for(int i = counter ; i > 0 ; i --)
    {
        if(i % 2 )
        {
            se--;
        }
        else
        {
            f--;
        }
    }

    if(f > se)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }


    return 0 ;
}
