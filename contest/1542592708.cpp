#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ii pair<int, int>
#define mp make_pair
#define nl '\n'

string password;
int n;
bool s, e;

int main()
{
    while(cin >> password >> n)
    {
        string st;
        s = e = 0;
        for(int i = 0; i <n; i++)
        {
            cin >> st;
            if(s && e)
                continue;
            if(st == password)
            {
                s = e = 1;
            }
            if(st[0] == password[1])
                e = 1;
            if(st[st.size() - 1] == password[0])
                s = 1;
        }
        if(s && e)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}
