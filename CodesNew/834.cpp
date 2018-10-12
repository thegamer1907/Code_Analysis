#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i ,begin,end) for(int i = begin ; i < end ; i++)
const int N=1001;

int main()
{
    int same=0,n,m;
    string s;
    map <string,int> word;
    cin >> n >> m;
    loop(i,0,n)
    {
        cin >> s;
        word[s] = 1;
    }
    loop(i,0,m)
    {
        cin >> s;
        if (word[s])
            same++;
    }
    if (same % 2 == 0)
    {
        if (n > m)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if (n >= m)
            cout << "YES";
        else
            cout << "NO";
    }
}
